#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
////��������Ϸ
//void menu()
//{
//	printf("*****************************\n");
//	printf("****** 1.play   0.exit ******\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//����1~100֮��������(rand����ֵ�ķ�Χ��0~32767)
//	printf("���1~100֮�������\n");
//
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//�������������
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ������룺ȡ���ػ�������ȡ��\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "ȡ���ػ�") == 0)//strcmp�Ƚ������ַ�������������0
//		system("shutdown -a");//ȡ���ػ�
//	else
//		goto again;
//	return 0;
//}

//int main()
//{
//	char arr[] = "Hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

int main()
{
	int a = 3;//0011--3
	int b = 5;//0101--5
	//��λ�����ͬΪ0������Ϊ1
	a = a ^ b;//0110
	b = a ^ b;//0011--3
	a = a ^ b;//0101--5
	printf("a = %d,b = %d\n", a, b);
	return 0;
}