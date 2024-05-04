#define _CRT_SECURE_NO_WARNINGS 1

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//
//void test(int*p1, int *p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//
//	return 0;
//}


//
//int a;
//int b;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//
//int a = 0;
//int b = 0;
//
//int main()
//{
//	test();
//	//
//	return 0;
//}

//逗号表达式
//exec( (vl，v2)，(v3，v4)，v5，v6 );

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
#include <stdio.h>

//
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名是非常关键，名字最好能提现函数的功能
//
//	return 0;
//}


//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d\n", Fun(2));
//
//    return 0;
//}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *(str + left);//str[left];
//		*(str + left) = *(str+right);
//		*(str+right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void reverse_string(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);//
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	//判断条件
//	if(my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);//4
//	}
//
//	*(str + len - 1) = tmp;//5
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//	printf("%d\n", sum);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[8];
//
//	//int a = 10;//初始化
//	////int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = {'b', 'i', 't'};
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };
//	//[b i t]
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//%p - 是按地址的格式打印 - 十六进制的打印

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	//printf("%x\n", 0x12);
	//printf("%p\n", 0x12);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int*p = arr;//数组名是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}