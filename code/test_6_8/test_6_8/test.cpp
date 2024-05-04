#define _CRT_SECURE_NO_WARNINGS 1

//strerror

#include <stdio.h>
#include <errno.h>
#include <string.h>

//strerror
//perror
//
//int main()
//{
//	//打开文件失败的时候，会返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	//0   "no error"
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	// 
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <ctype.h>
//
//int main()
//{
//	char ch = 'a';
//	//isdigit  如果是数字字符返回非0的值，如果不是数字字符，返回0
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//
//	}
//
//	//int ret = isdigit(ch);
//	//int ret = islower(ch);
//	//printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 ...
//	int arr2[20] = { 0 };
//	//strcpy()
//	//char* strcpy(char* dest, const char* src)
//	return 0;
//}

//内存操作函数
//memcpy - 内存拷贝
//
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (num--)//4 3 2 1
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//memcpy函数应该拷贝不重叠的内存
//memmove函数可以处理内存重叠的情况

//
//void* my_memmove(void* dest, const void*src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else 
//	{
//		//后->前
//		while (num--)//19
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//               1 2 1 2 3 4 5 8 9 10
//	//my_memmove(arr1+2, arr1, 20);
//	//memmove(arr1, arr1+2, 20);
//	memcpy(arr1+2, arr1, 20);
//	return 0;
//}

//memcpy - 只要实现了不重叠拷贝就可以了,而VS中的实现既可以拷贝不重叠，也可以拷贝重叠内存
//60 100




//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}


//memcmp - 内存比较
//
//int main()
//{
//	float arr1[] = { 1.0, 2.0,3.0,4.0 };
//	float arr2[] = { 1.0, 3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp - strcmp
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	//40
//	int arr[10] = { 0 };//20
//	memset(arr, 1, 20);//以字节为单位设置内存的
//	//01 00 00 00
//	//01 01 01 01
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6是全局的
//
//
//int main()
//{
//	//b1,b2,b3是局部变量
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//
//	return 0;
//}

//匿名结构体类型
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//} s;
//
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;
//	
//	return 0;
//}

//
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};
//
//struct N
//{
//	int d;//4
//	struct N n;
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//


//
//int main()
//{
//	struct N sn;//
//
//	return 0;
//}



//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//
//	return 0;
//}

//
//struct S
//{
//	char c;
//	int i;
//}s1, s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	//struct S s3 = {'x', 20};
//	struct B sb = { 3.14, {'w', 100},'q' };
//	//. 
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}
//
//
//
//struct S
//{
//	int i;//4
//	char c;//1
//};
//
//struct S2
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
////结构体内存对齐
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", sizeof(s));//
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//
//
//	return 0;
//}

