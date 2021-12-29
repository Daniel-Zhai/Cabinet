#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));//3
//	printf("%d", sizeof(arr));//4
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 43);
//	printf("%d\n", printf("%d", 43));
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void print(int i)
//{
//	if(i>9)
//	{
//		print(i/10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//		count++;
//	else
//		return ;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int main()
//{
//	//nµÄ½×³Ë
//	int n = 0;
//	int i = 0;
//	int q = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		q = i * q;
//	}
//	printf("%d\n", q);
//	return 0;
//}

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main()
{
	//nµÄ½×³Ë
	int n = 0;
	int i = 0;
	int q = 1;
	scanf("%d", &n);
	q = Fac(n);
	printf("%d\n", q);
	return 0;
}