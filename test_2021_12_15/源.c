#define _CRT_SECURE_NO_WARNINGS
//typedef void(*pfun_t)(int);//����������
//int main()
//{
//	(*(void(*)())0)();//��0ǿ��ת���ɺ���ָ�����ͣ�0Ϊ������ַ������0��ַ���ĸú���
//	return 0;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	int (*parr[4])(int, int)={Add,Sub,Mul,Div};//����ָ�������
//	return 0;
//}
//char* my_strcpy(char* dest,const char* src)
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfarr[4])(char*, const char*) ;
//	return 0;
//}
// 
#include<stdio.h>
//������
void menu()
{
	printf("1.Add       2.Sub\n");
	printf("3.Mul       4.Div\n");
	printf("     0.exit\n      ");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("�����������:>");
			scanf("%d%d", &x, &y);
			int ret = parr[input](x,y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	
	return 0;
}