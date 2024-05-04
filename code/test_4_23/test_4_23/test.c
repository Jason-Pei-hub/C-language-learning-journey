#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//创建
//	//int arr[3][4];
//	//char ch[3][10];
//	//初始化 - 创建的同时给赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr[3][4] = { 1,2,3,4,5,6,7};//不完全初始化 - 后面补0
//	//int arr[3][4] = { {1,2}, {3,4} ,{4,5} };
//
//	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{		
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//二维数组在数组中存储
//	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
//	//int i = 0;
//	//int j = 0;
//	//int* p = &arr[0][0];
//
//	//for (i = 0; i < 12; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
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
//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	//排序为升序 - 冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//数组传参的时候，传递的其实是数组首元素的地址
//
//	return 0;
//}

//数组名是什么？
//数组名是数组首元素的地址
// 但是有2个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arr取出的是数组的地址
//	printf("%p\n", &arr+1);//
//
//
//	printf("%p\n", arr);//2
//	printf("%p\n", arr+1);//2
//
//	//printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//数组名是首元素的地址
//
//	return 0;
//}



