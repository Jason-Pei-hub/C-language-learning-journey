#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int cnt = 0;
//
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}
//int main()
//{
//	//int x = 1;
//	//do {
//	//	printf("%2d\n", x++);//1
//	//} while (x--);
//
//	//int i = 10;
//	//int j = 20;
//	//int k = 3;
//	//k *= i + j;
//	////k *= (i + j);
//
//	//printf("%d\n", k);
//
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//	//hehe
//	int /*hehe*/a = 10; int b = 20;
//	printf("a = %d\n", a);
//
//	return 0;//
//}


//
//int a = 1;
//
//void test() {
//    int a = 2;
//    a += 1;
//}
//
//int main() {
//
//    test();
//    printf("%d\n", a);//1
//    return 0;
//}
//
//
//int main()
//{
//	//int a = 0, c = 0;
//
//	//do {
//	//	--c;//c = -1
//	//	a = a - 1;//a = -1
//	//} while (a > 0);
//	//
//	//int x = 0;
//	//int y = 0;
//
//	//for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	//	;
//	//1 1 1 1
//
//	int year = 1009, * p = &year;
//
//
//	//int year = 1009;
//	//int* p = &year;
//
//	return 0;
//}
//
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr+len-1);
//
//    printf("%s\n", arr);
//
//    return 0;
//}
//

int main()
{
	int i, h;
	float o, p;
	printf("请选择红包分发形式:\n");

	printf("1.均分     2.随机\n");
	scanf("%d", &h);
	if (h == 1)
	{
		printf("请输入红包总金额:\n");
		scanf("%f", &o);
		printf("请输入分发红包个数:\n");
		scanf("%f", &p);
		for (i = 1; i <= p; i++)
			printf("恭喜你抢到第%d个红包:金额为:%f\n", i, o / p);
	}
	return 0;
}
