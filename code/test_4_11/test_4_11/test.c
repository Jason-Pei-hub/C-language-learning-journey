#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//EOF
//
//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	//gets
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	// 
//	//清理缓冲区的中多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//循环体内改变循环变量的例子
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//判断部分的省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	printf("hehe\n");
//	return 0;
//}

//while for do while

//n!  - 1->n

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//1*2*3*4*5 = 120
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//计算 1!+2!+3!+……+10!
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 1+2+6 = 9
//	//3! = 3*2*1 = 3*2!
//	//2!=2*1
//
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret = 1;//计算n的阶乘之前，把ret初始为1
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//


//welcome to bit!!!!!!
//####################

//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
#include <string.h>
//strlen
//strcmp
//
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//
//	char password[20] = { 0 };
//	//abcdef
//	//abccqqqqqq
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - 两个字符串比较，不能使用==，应该使用strcmp
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//
//写一个猜数字游戏
//1. 自动产生一个1-100之间的随机数
//2. 猜数字
//  a. 猜对了，就恭喜你，游戏结束
//  b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3. 游戏一个一直玩，除非退出游戏
//
//
//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******  1. play     ********\n");
//	printf("*******  0. exit     ********\n");
//	printf("*****************************\n");
//}
////
//void game()
//{
//	//猜数字游戏的实现
//	//1. 生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//时间 - 时间戳
//
//
//	int ret = rand()%100+1;//%100的余数是0-99，然后+1，范围就是1-100
//	//printf("%d\n", ret);
//
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int  main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//

#include <stdio.h>

int main()
{
	char arr[10] = {0};
	gets(arr);
	puts(arr);
	return 0;
}
