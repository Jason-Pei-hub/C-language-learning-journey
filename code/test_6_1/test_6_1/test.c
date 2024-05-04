#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - 是第一行第一个元素
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4 解释：a[0]作为数组名并没有单独放在sizeof内部，
//									//也没取地址,所以a[0]就是第一行第一个算的地址
//									//a[0]+1,就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - 解释：*(a[0] + 1)是第一行第二个元素
//
//	printf("%d\n", sizeof(a + 1));//4 - 解释：a是二维数组的数组名，并没有取地址
//	//也没有单独放在sizeof内部,所以a就表示二维数组首元素的地址，即：第一行的地址
//	//a + 1就是二维数组第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16 解释：a+1是第二行的地址，所以*（a+1）表示第二行
//	//所以计算的就是第2行的大小
//
//	printf("%d\n", sizeof(&a[0] + 1));//4 解释：a[0]是第一行的数组名，
//	//&a[0]取出的就是第一行的地址,&a[0]+1 就是第二行的地址
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//&a[0]+1 就是第二行的地址
//	//*(&a[0]+1) 就是第二行，所以计算的第二行的地址
//
//	printf("%d\n", sizeof(*a));//16 解释：a作为二维数组的数组名，没有&，没有单独放在sizeof内部
//	//a就是首元素的地址，即第一行的地址，所以*a就是第一行，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[3]));//16 解释：a[3]其实是第四行的数组名（如果有的话）
//	//所以其实不存在，也能通过类型计算大小的
//	printf("%d\n", sizeof(a[-1]));
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//
//    return 0;
//}


//程序的结果是什么？

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}

//
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;//int (*)[5]
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //?
//
//    return 0;
//}


//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}













