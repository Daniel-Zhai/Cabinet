#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//long long* Fib(size_t N)
//{
//	long long* FibArray = malloc(sizeof(long long) * (N + 1));
//	FibArray[0] = 0;
//	FibArray[1] = 1;
//	int i = 2;
//	for (i = 2; i <= N; ++i)
//	{
//		FibArray[i] = FibArray[i - 1] + FibArray[i - 2];
//	}
//	return FibArray;
//}
//int main()
//{
//	int* ret = Fib(50);
//	printf("%d", *ret);
//	return 0;
//}

//求第n个斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//青蛙跳台阶，一次可以跳一层，也可以跳两层，问跳到第n层有几种跳法      递归
//1层1种跳法，2层2种，3层3种，4层5种
//假设第一种为全跳单层，然后一个双层从前向后移动，每一种再加双层移动
//int Num(int n)
//{
//	int a = n;
//	int i = 0;
//	int x = 0;
//	//1个双层
//	x = 2 * n - 1;
//	if (n % 2 != 0)
//		x = 2 * n;
//	for (i = n; i > 0; i-=2)
//	{
//		
//
//
//	}
//}
//int main()
//{
//	int n = 0;
//	int num = 0;//几种
//	scanf("%d", &n);
//	num = Num(n);
//	printf("%d\n", num);
//	return 0;
//}


//汉诺塔问题






//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i=0;i<(int)strlen(arr);i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

