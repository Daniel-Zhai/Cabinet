#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//һƿ��ˮһԪ��������ƿ��һƿ��ˮ��20Ԫ�ܺȼ�ƿ
//20ƿ����10ƿ����5ƿ����2ƿ����1ƿ��һ��38ƿ

int main()
{
	//nƿnԪ
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	do {
		sum += n;
	} while (n/=2);
	sum += 1;
	printf("%d\n", sum);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			printf("�ҵ��ˣ��±���%d\n", mid);
//		break;//©�ˣ���
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	int sz = sizeof(arr) / sizeof(arr[0]);//10�������ո��\0
//	printf("%d", sz);
//	return 0;
//}
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Welcome to Bit";
//	char arr2[] = "##############";
//	printf("%s\n", arr2);
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}