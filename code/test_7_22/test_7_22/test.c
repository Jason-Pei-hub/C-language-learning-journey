#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = {0};
//	//sprintf 把一个格式化的数据，转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//从buf字符串中还原出一个结构体数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//调整文件指针
//	fseek(pf, -2, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//让文件指针回到其实位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 
//0000 0000 0000 0000 0010 0111 0001 0000
//00 00 27 10
//


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写代码把test.txt文件拷贝一份，生成test2.txt
//
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//文件打开成功
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		//写文件
//		fputc(ch, pfwrite);
//	}
//	
//	if (feof(pfread))
//	{
//		printf("遇到文件结束标志，文件正常结束\n");
//	}
//	else if(ferror(pfread))
//	{
//		printf("文件读取失败结束\n");
//	}
//
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}

//
//
//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//
//	return 0;
//}



//云服务器 - 100元左右

//声明外部符号
extern int Add(int x, int y);


int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}





