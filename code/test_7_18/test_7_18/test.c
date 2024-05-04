#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct  enum
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u = {10};
//	u.i = 1000;
//	u.c = 100;
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	//printf("%d\n", sizeof(u));//
//
//	return 0;
//}

//判断当前计算机的大小端存储


//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}
//
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1 就是小端
//	//返回0 就是大端
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
//
//union Un
//{
//	char a[5];//1    5
//	//int i;//4
//	char c;//1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}
//
//union Un
//{
//	short s[5];// 2 10
//	int a;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}

//动态内存开辟
#include <stdlib.h>
//
//int main()
//{
//	//假设开辟10个整形的空间 - 10* sizeof(int)
//	//int arr[10];//栈区
//	
//	//动态内存开辟的
//	int* p = (int*)malloc(1000000000*sizeof(int));//void*
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		//printf  + strerror
//		perror("main");//main: xxxxxxxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//回收空间
//	free(p);
//	p = NULL;//自己动手把p置为NULL
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);//err
//
//	return 0;
//}
//
//int main()
//{
//	//int*p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//
//	if (p == NULL)
//		return 1;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//这里需要p指向的空间更大，需要20个int的空间
//	//realloc调整空间
//
//	int*ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//


int main()
{
	int* p = (int*)realloc(NULL, 40);//这里功能类似于malloc，就是直接在堆区开辟40个字节

	return 0;
}