#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	//求最大公约数
//	int m = 24;
//	int n = 18;
//	int p = 0;
//	scanf("%%d%d", &m, &n);
//	while (m % n)
//	{
//		p = m % n;//6
//		m = n;//18
//		n = p;//6
//		//m=24     n=7
//		 m    n     p
//		24    7     3
//		 7    3     1
//         3    1     0
//	}       返回1
//
//	printf("%d\n", n);
//	return 0;
//}

//判断1000~2000年之间的闰年
//1.能被4整除并且不能被100整除
//2.能被400整除
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//求100~200之间的素数
//int main()
//{
//	int i = 0;
//	int p = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (p = 2; p <= i-1; p++)
//		{
//			if (i % p == 0)
//			{
//				break;
//			}
//		}
//		if (i == p)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//a和b最少有一个小于i开平方--sqrt
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int p = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (p = 2; p <= sqrt(i); p++)
//		{
//			if (i % p == 0)
//			{
//				break;
//			}
//		}
//		if (p>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;//double!!
//	for (i = 1; i <= 100; i++)
//	{
//		//int p = pow(-1, i + 1);
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//int max = 0;//如果数组内容小于0会出错
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//		//if (i == sz - 1)
//		//	break;
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}

//乘法口诀表
int main()
{
	int a = 0;//行
	int b = 0;//列
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d    ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}