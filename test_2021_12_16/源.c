#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void Print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(* p)("hehe");
//	return 0;
//}
//void print(char* str)//»Øµ÷º¯Êý
//{
//	printf("str:%s\n",str);
//}
//void test(void(*p)(char*))
//{
//	p("hehe");
//}
//int main()
//{
//	test(print);
//	return 0
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	printf("ret = %d", ret);
//	return 0;
//}

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = 1;
		for (j = 1; j <= n-i+1; j++)
		{
			ret = j * ret;
		}
		sum = ret + sum;
	}
	printf("sum = %d", sum);
	return 0;
}