# C语言操作符—第三期



## 逻辑操作符

逻辑操作符有哪些：

```c
&&          逻辑与
||          逻辑或
```



**区分逻辑与和按位与** 

**区分逻辑或和按位或**

```c
1&2----->0
1&&2---->1
1|2----->3
1||2---->1
```



**逻辑与和或的特点：**

**360笔试题**

```c
#include <stdio.h>
int main()
{
    int i = 0,a=0,b=2,c =3,d=4;
    i = a++ && ++b && d++;
    //i = a++||++b||d++;
    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
    return 0;
}
//程序输出的结果是什么？
```

大家可以思考一下







正确答案是

> 1 2 3 4 

![image-20240322221215331](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403222212384.png)

相信前后置++大家已经理解得很透彻了

但是再这道题里面，考察的重点是&&操作符

因为是逻辑与操作符，所以一旦出现假，那么整个式子已经可以不用继续计算了，不管后面结果如何，一定是假的

```c
i = a++ && ++b && d++;
//在这里a++是后置++，先使用再++，所以a是0，为假
//整个式子从左往右计算，那么只有第一个a被计算了，其他的都不变
```



##  条件操作符（三目操作符）



```c
exp1 ? exp2 : exp3
```

是唯一一个有三个操作数的操作符

```c
if (a > 5)
        b = 3;
else
        b = -3;
```

完全可以写成

```c
b = (a > 5 ? 1 : -1);
```



##  逗号表达式

```c
exp1, exp2, exp3, …expN
```

逗号表达式，就是用逗号隔开的多个表达式。 逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。

```c
int a = 1;
int b = 2;
int c = (a>b, a=b+10, a, b=a+1);//逗号表达式
c是多少？
```

很简单，只有最后一个表达式才能决定C的结果

![image-20240322222016432](https://gitee.com/jason_pei/typora-bed/raw/master/image/202403222220464.png)

但是计算的时候一定要参照从左往右的顺序哦



再来看一个例子，来看具体的运用

```c
a = get_val();
count_val(a);
while (a > 0)
{
    //业务处理
    a = get_val();
    count_val(a);
}


如果使用逗号表达式，改写：
    
while (a = get_val(), count_val(a), a > 0)
{
    //业务处理
}
```



##  下标引用、函数调用和结构成员



### [ ] 下标引用操作符 

操作数：一个数组名 + 一个索引值

```c
int arr[10];//创建数组
 arr[9] = 10;//实用下标引用操作符。
 [ ]的两个操作数是arr和9。
```



###  ( ) 函数调用操作符

接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数。

```c
#include <stdio.h>
void test1()
{
    printf("hehe\n");
}
void test2(const char* str)
{
    printf("%s\n", str);
}
int main()
{
    test1();            //实用（）作为函数调用操作符。
    test2("hello bit.");//实用（）作为函数调用操作符。
    return 0;
}
```



### 访问一个结构的成员

> .                        结构体.成员名
>
>  ->                    结构体指针->成员名

```c
#include <stdio.h>
struct Stu
{
    char name[10];
    int age;
    char sex[5];
    double score;
}；
void set_age1(struct Stu stu)
{
    stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
    pStu->age = 18;//结构成员访问
}
int main()
{
    struct Stu stu;
    struct Stu* pStu = &stu;//结构成员访问

    stu.age = 20;//结构成员访问
    set_age1(stu);

    pStu->age = 20;//结构成员访问
    set_age2(pStu);
    return 0;
}
```



## 表达式求值

表达式求值的顺序一部分是由操作符的优先级和结合性决定。 

同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型。



### 隐式类型转换

C的整型算术运算总是至少以缺省整型类型的精度来进行的。 

为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为**整型提升**。



**整型提升的意义：**

> 表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器(ALU)的操作数的字节长度 一般就是int的字节长度，同时也是CPU的通用寄存器的长度。
>
>  因此，即使两个char类型的相加，在CPU执行时实际上也要先转换为CPU内整型操作数的标准长 度。 
>
> 通用CPU（general-purpose CPU）是难以直接实现两个8比特字节直接相加运算（虽然机器指令 中可能有这种字节相加指令）。所以，表达式中各种长度可能小于int长度的整型值，都必须先转 换为int或unsigned int，然后才能送入CPU去执行运算。

```c
//实例1
char a,b,c;
...
a = b + c;

```

b和c的值被提升为普通整型，然后再执行加法运算。

加法运算完成之后，结果将被截断，然后再存储于a中。

#### 如何进行整体提升呢？

> 整形提升是按照变量的数据类型的符号位来提升的

```c
//负数的整形提升
char c1 = -1;
变量c1的二进制位(补码)中只有8个比特位：
1111111
因为 char 为有符号的 char
所以整形提升的时候，高位补充符号位，即为1
提升之后的结果是：
11111111111111111111111111111111
    
//正数的整形提升
char c2 = 1;
变量c2的二进制位(补码)中只有8个比特位：
00000001
因为 char 为有符号的 char
所以整形提升的时候，高位补充符号位，即为0
提升之后的结果是：
00000000000000000000000000000001
    
//无符号整形提升，高位补0
```



**整形提升的例子:**

```c
//实例1
int main()
{
 char a = 0xb6;
 short b = 0xb600;
 int c = 0xb6000000;
 if(a==0xb6)
 printf("a");
 if(b==0xb600)
 printf("b");
 if(c==0xb6000000)
 printf("c");
 return 0;
}
```

实例1中的a,b要进行整形提升,但是c不需要整形提升 

a,b整形提升之后,变成了负数,所以表达式 a==0xb6 , b==0xb600 的结果是假,但是c不发生整形提升,则表 达式 c==0xb6000000 的结果是真. 所程序输出的结果是:

> c

```c
//实例2
int main()
{
 char c = 1;
 printf("%u\n", sizeof(c));
 printf("%u\n", sizeof(+c));
 printf("%u\n", sizeof(-c));
 return 0;
}
```



实例2中的,c只要参与表达式运算,就会发生整形提升,表达式 +c ,就会发生提升,所以 sizeof(+c) 是4个字节. 

表达式 -c 也会发生整形提升,所以 sizeof(-c) 是4个字节,但是 sizeof(c) ,就是1个字节