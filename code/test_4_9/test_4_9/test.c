#define _CRT_SECURE_NO_WARNINGS 1

//void test()
//{
//	int b = 0;
//}
//
//int main()
//{
//	int a = 10;
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    //局部变量优先
//    printf("num = %d\n", num);//1
//    return 0;
//}
//

#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
//

//C99 标准中引用一个概念：变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
//VS2019 不支持C99中变长数组的

//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}

//MAX - 一般不建议把函数的名字写成全大写
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}


//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

#include <stdio.h>

//int main()
//{
//    //输入
//    int m = 0;
//    printf("请输入一个整数:");
//    scanf("%d", &m);
//
//    //判断并输出
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}

//
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//空语句
//	return 0;
//}


//
//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	/*if (age >= 18)
//	{ 
//		printf("成年\n");
//	}
//	else
//	{ 
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}*/
//	/*if (age >= 18)
//		printf("成年\n");*/
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//代码风格 - 
//<高质量C/C++编程>


//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//		printf("hehe\n");
//
//
//	return 0;
//}
//
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//}
//
//int main()
//{
//	//C++
//	//c99支持了这样写
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//}
//
//	for (int i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//1-5 工作日
//6-7 休息日

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:m++;n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	// 
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断部分，看是否进行下一次循环
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	return 0;
//}

//getchar

//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar 就读取结束

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}