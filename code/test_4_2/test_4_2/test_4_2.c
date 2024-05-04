#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//作用域和生命周期
// 
// 作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
//
//
//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}
//

//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//
//
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//常量

//#define MAX 10000
//
//int main()
//{
//	//1. 字面常量
//	//3.14;
//	//10;
//	//'a';
//	//"abcdef";
//
//	//2. const修饰的常变量
//	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	//num = 20;
//	//printf("num = %d\n", num);//20
//
//	//int arr[10] = {0};//10个元素
//	//
//	//const int n = 10;
//	//int arr2[n] = {0};//n是变量的，这里是不行
//
//	//3. #define 定义的标识符常量
//	//MAX = 20000;//err
//	/*int n = MAX;
//	printf("n = %d\n", n);*/
//
//
//	return 0;
//}

//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4. 枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//	//MALE = 3;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//字符串就是一串字符 - 用双引号括起来的一串字符
//
//int main()
//{
//	"abcdef";
//	"hello bit";
//
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//
//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");//\+n
//	return 0;
//}
//

//
//int main()
//{
//	//printf("(are you ok??)");//??) -- ] - 三字母词
//	//(are you ok]
//	//
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c");
//	printf("\a");
//
//	//printf在打印数据的时候，可以指定打印的格式
//
//
//	return 0;
//}
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是十进制的多少呢？
//	//X   -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101
//	//printf("%c\n", '\x30');//48 - '0'
//	//printf("%d\n", strlen("abc"));//3
//	
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}

//
//注释: 是用来解释复杂代码的
//
//
//int main()
//{
//	//int a = 10; //C++注释风格
//	/*
//	int b = 0;
//	*/   
//	//C语言的注释风格 - 不支持嵌套注释
//
//	return 0;
//}

//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{ 
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//比特 - 30000代码 - 找一个不错的工作
//
//int main()
//{
//	int line = 0;
//	//循环
//	while(line<30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//
//	//....
//
//	//数组 - 一组相同类型的元素的集合
//	//10个整形1-10存起来
//	//数组是用下标来访问的
//	//*
//	// /
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	////char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩余的默认为0
//
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - 取模（余）
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	//0 表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}
//
//int main()
//{
//	//sizeof是一个操作符
//	//不是函数
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}
//
//int main()
//{
//	//10*4 = 40 
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}
