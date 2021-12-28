#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
////猜数字游戏
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
//	ret = rand() % 100 + 1;//生成1~100之间的随机数(rand生成值的范围是0~32767)
//	printf("请猜1~100之间的数字\n");
//
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//电脑生成随机数
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
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
//	printf("电脑将在1分钟内关机，输入：取消关机，即可取消\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "取消关机") == 0)//strcmp比较两个字符串，相等则等于0
//		system("shutdown -a");//取消关机
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
	//按位异或，相同为0，相异为1
	a = a ^ b;//0110
	b = a ^ b;//0011--3
	a = a ^ b;//0101--5
	printf("a = %d,b = %d\n", a, b);
	return 0;
}