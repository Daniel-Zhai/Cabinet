#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//typedef struct Book
//{
//	char name[20];
//	short price;
//}Book;
//int main()
//{
//	Book b1 = { "C语言程序设计",55 };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	Book* pb = &b1;
//	strcpy(b1.name, "C++程序设计");
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n", pb->price);
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;//3
//	case 2:n++;//2
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;//m = 4, n = 3
//		}
//	case 4:m++;//m = 5, n = 3
//		break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//		
//	return 0;
//}