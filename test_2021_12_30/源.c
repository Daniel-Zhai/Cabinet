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

//���n��쳲�������
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

//������̨�ף�һ�ο�����һ�㣬Ҳ���������㣬��������n���м�������      �ݹ�
//1��1��������2��2�֣�3��3�֣�4��5��
//�����һ��Ϊȫ�����㣬Ȼ��һ��˫���ǰ����ƶ���ÿһ���ټ�˫���ƶ�
//int Num(int n)
//{
//	int a = n;
//	int i = 0;
//	int x = 0;
//	//1��˫��
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
//	int num = 0;//����
//	scanf("%d", &n);
//	num = Num(n);
//	printf("%d\n", num);
//	return 0;
//}


//��ŵ������






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

