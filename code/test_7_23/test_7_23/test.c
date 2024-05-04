#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//
//	//int i = 0;
//	//FILE* pf = fopen("log.txt", "a+");
//	//if (pf == NULL)
//	//{
//	//	perror("fopen\n");
//	//	return 1;
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	//}
//	//fclose(pf);
//	//pf = NULL;
//
//	printf("%d\n", __STDC__);//不支持
//	return 0;
//}


//#define 是定义符号的

//#define M 1000
//#define reg register
//#define do_forever for(;;)


//int main()
//{
//	reg int num = 0;
//	do_forever;
//	int m = M;
//	printf("%d\n", m);
//
//	return 0;
//}

//#define CASE break;case
//int main()
//{
//	int n = 0;
//
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//
//	return 0;
//}

//#define M 1000
//
//int main()
//{
//	//int m = 1000;
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = M;
//	else
//		b = -M;
//
//	return 0;
//}

//#define 定义宏
//括号很重要

//#define SQUARE(X) ((X)*(X))
//
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	printf("%d\n", SQUARE(3+1));//
//	printf("%d\n", 10 * DOUBLE(4));
//
//	//printf("%d\n", 10 * ((4) + (4)));
//	//printf("%d\n", 3 + 1 * 3 + 1);
//	//printf("%d\n", 3 * 3);
//	return 0;
//}
//
//
//#define M 100
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int max = MAX(101, M);
//	printf("M = %d\n", M);
//
//	return 0;
//}
//
//void print(int x)
//{
//	printf("the value of c is %d\n", x);
//}
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//
//	int a = 10;
//	print(a);
//	//the value of a is 10
//
//	int b = 20;
//	print(b);
//	//the value of b is 20
//
//	int c = 30;
//	print(c);
//	//the value of c is 30
//
//	return 0;
//}
//
//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n", X);
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//
//	int a = 10;
//	PRINT(a, "%d");
//	//printf("the value of ""a"" is %d\n", a);
//	//the value of a is 10
//
//	int b = 20;
//	PRINT(b, "%d");
//	//printf("the value of ""b"" is %d\n", b);
//
//	//the value of b is 20
//
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//
//	float f = 5.5f;
//	PRINT(f, "%f");
//	printf("the value of ""F"" is ""%f""\n", f);
//
//
//	return 0;
//}
//

//#define CAT(X,Y,Z) X##Y##Z
//
//int main()
//{
//	int class101101 = 100;
//	printf("%d\n", CAT(class, 101, 101));
//
//	//printf("%d\n", class101);
//
//	return 0;
//}

//1
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	//int m = MAX(a, b);
//	int m = ((a)>(b)?(a):(b));
//
//	m = Max(a, b);
//
//	//int m = MAX(a++, b++);
//	//printf("a=%d b=%d\n", a, b);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//printf("m = %d\n", m);//?
//
//	return 0;
//}


//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//malloc(10*sizeof(int));
//	//malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	//(int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}


//
//
//int main()
//{
//    int arr[M] = { 0 };
//    int i = 0;
//
//    for (i = 0; i < M; i++)
//    {
//        arr[i] = i;
//    }
//
//    for (i = 0; i < M; i++)
//    {
//        printf("%d ", i);
//    }
//
//    return 0;
//}
//
//
//

#if 0

#define PRINT 1

int main()
{
/*#ifdef PRINT
	printf("hehe\n");
#endif*/ 

#if PRINT
	printf("hehe\n");
#endif

	return 0;
}

#endif


//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 2==3
//	printf("haha\n");
//#else 
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define TEST 0
//#define HEHE 1
//
//int main()
//{
////如果TEST定义了，下面参与编译
////1
//#ifdef TEST
//	printf("test1\n");
//#endif
////2
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////如果HEHE不定义，下面参与编译
////3
//#ifndef HEHE
//	printf("hehe1\n");
//#endif
////4
//#if !defined(HEHE)
//	printf("hehe2\n");
//#endif
//	return 0;
//}
//

//int main()
//{
//	EOF
//	return 0;
//}

//库文件包含,C语言库中提供的函数的头文件使用<>
#include <stdio.h>

//本地文件包含,自定义的函数的头文件使用""
#include "add.h"

//<> 和 ""包含头文件的本质区别是：查找的策略的区别
//"" 1. 自己代码所在的目录下查找，2.如果第1不找不到，则在库函数的头文件目录下查找
//<> 直接去库函数头文件所在的目录下查找

//VS2019 -D:\Windows Kits\10\Include\10.0.19041.0\ucrt
//
//int main()
//{
//	EOF
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

int main()
{
	int n = 10;
	int arr[n];

	return 0;
}