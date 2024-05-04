#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//假设写一个冒泡排序函数，让你排序字符串
//bubble_sort_str();
//strcmp
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//			size_t num, //排序数据元素的个数
//			size_t size,//排序数据中一个元素的大小，单位是字节
//			int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
//			);

//
//qsort-库函数 - 的作者
//
#include <stdlib.h>
#include <string.h>

//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//整形数据的排序
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//打印
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}
//
//void Swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////模仿qsort实现一个冒泡排序的通用算法
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			//arr[j] arr[j+1]
//			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//void test3()
//{
//	//整形数据的排序
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//打印
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	void* p = &a;//无具体类型
//	p = &ch;
//	//*p;//访问几个字节？
//	//p++;//err
//	return 0;
//}
//
//


//
//sizeof(数组名) - 数组名表示整个数组的-计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
//
//
//int main()
//{
//	//int a[] = { 1,2,3,4 };//4*4=16
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8 a + 0 是第一个元素的地址，sizeof(a + 0)计算的是地址的大小
//	//printf("%d\n", sizeof(*a));//4  *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
//	//printf("%d\n", sizeof(a + 1));//4/8 a + 1是第二个元素的地址，sizeof(a+1)计算的地址的大小
//	//printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小
//
//	//printf("%d\n", sizeof(&a)); //4/8 - &a虽然数组的地址，但是也是地址，sizeof(&a)计算的是一个地址的大小
//	//printf("%d\n", sizeof(* &a));//16 - 计算的数组的大小
//	////&a -- int(*p)[4] = &a;
//	//printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 是数组后面的空间的地址
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	//字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//
//
//	//char arr[] = "abcdef";
//	////[a b c d e f \0]
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	//[a b c d e f \0] 
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
//	//printf("%d\n", sizeof(&arr + 1));//4/8 
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//
//	//printf("%d\n", sizeof(p));
//	//printf("%d\n", sizeof(p + 1));
//	//printf("%d\n", sizeof(*p));
//	//printf("%d\n", sizeof(p[0]));
//	//printf("%d\n", sizeof(&p));
//	//printf("%d\n", sizeof(&p + 1));
//	//printf("%d\n", sizeof(&p[0] + 1));
//
//
//
//	return 0;
//}





#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,-10 };
	int min = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d\n", min);
	return 0;
}
