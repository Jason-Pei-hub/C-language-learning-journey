#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//动态内存开辟常见的错误
//1. 对NULL指着的解引用操作
//2. 对动态开辟空间的越界访问
//3. 使用free释放非动态开辟的空间
//4. 使用free释放动态内存中的一部分
//5. 对同一块动态开辟的空间，多次释放
//6. 动态开辟的空间忘记释放-  内存泄漏 - 比较严重的

//
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//}
//
//int main()
//{
//	test();
//	//....
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//
//	//释放
//	free(p);
//	return 0;
//}

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//栈区
//	int* p = arr;
//	//使用
//	
//	free(p);//使用free释放非动态开辟的空间
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int*p = (int*)malloc(1000000000);
//	//对malloc函数的返回值，做判断
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//越界访问
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}

#include <string.h>
//
//str传给GetMemory函数的时候是值传递，所以GetMemory函数的形参p是str的一份临时拷贝。
//在GetMemory函数内部动态申请空间的地址，存放在p中，不会影响外边str，所以当GetMemory函数返回之后，str依然是NULL。所以strcpy会失败。
//
//当GetMemory函数返回之后，形参p销毁，使得动态开辟的100个字节存在内存泄漏。无法释放。
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改:1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//?
//	//printf("hello world");//char *p = "hello world";
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//GetMemory 函数内部创建的数组是在栈区上创建的
//出了函数，p数组的空间就还给了操作系统
//返回的地址是没有实际的意义，如果通过返回的地址，去访问内存就是非法访问内存的
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//struct S
//{
//	int n;
//	int arr[];//大小是未知
//};
//
//struct S
//{
//	int n;//4
//	int arr[0];//大小是未知
//};
//
//int main()
//{
//	//期望arr的大小是10个整形
//	struct S*ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增加
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+20*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//	
//	//释放
//	free(ps);
//	ps = NULL;
//
//	//struct S s = {0};
//	//printf("%d\n", sizeof(s));//?
//
//	return 0;
//}
//

//
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//	ps->n = 10;
//	ps->arr = (int*)malloc(10*sizeof(int));
//	if (ps->arr == NULL)
//		return 1;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增加
//	int*ptr = realloc(ps->arr, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	//使用
//	
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//



