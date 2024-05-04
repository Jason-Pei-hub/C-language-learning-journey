#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. 计数器的版本
//2. 递归的版本
//3. 指针-指针
//
//int my_strlen(const char* str)
//{
//	int count = 0;//计数器
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a', 'b', 'c' };
//
//	int len  = my_strlen(arr);
//	//
//
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char* str = "xxxxxxxxxxxxxxxxxxx";
//
//	//char arr[5] = "####";
//	//arr = "hello";//err
//	//char* p = "hello";
//	//strcpy(arr, "hello");//string copy
//	//char arr2[] = { 'a', 'b', 'c' };
//	char* p = "hello world";
//
//	strcpy(str, p);//?
//
//	//printf("%s\n", arr);
//
//	return 0;
//}
//
//
//
//
//char* my_strcat(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1. 找目标字符串中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加源字符串,包含\0
//	while(*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;//返回的目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[20] = "hello ";//world
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);//字符串追加（连接）
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}
//
//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//?
//	printf("%s\n", arr);
//	return 0;
////}
//
//int main()
//{
//	/*char* p = "obc";
//	char* q = "abcdef";
//	if (p > q)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}*/
//
//	//if ("obc" > "abcdef")
//	//{
//
//	//}
//
//
//	//strcmp - 字符串比较大小的
//	//int ret = strcmp("abbb", "abq");//<0
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//
//	if (ret > 0)
//	{
//		printf("p > q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p == q\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 6);
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);//qwcdef
//	return 0;
//}
//
//

//int  main()
//{
//	char arr1[20] = "hello ";
//	                //hello wor\0
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char* p = "aqcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	int ret = strncmp(p, q, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		//abcdef
//		//  cdef
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	//在arr1中查找是否包含arr2数组
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}

//
//KMP - 字符串查找算法！
//


//zpw@bitedu.tech
//zpw 
//bitedu
//tech

//192.168.3.122
//192
//168
//3
//122


//strtok
//zpw@bitedu.tech
//@.
//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech hehe";
//	char* p = "@. ";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	//zpw\0bitedu\0tech\0
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//
//
//	return 0;
//}
//
//

//使用库函数的时候
//调用库函数失败的是，都会设置错误码
//全局的错误码
//int errno;//5

#include <errno.h>

int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//...
	fclose(pf);
	pf = NULL;

	return 0;
}