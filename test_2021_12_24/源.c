#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//一瓶汽水一元，两个空瓶换一瓶汽水，20元能喝几瓶
//20瓶，换10瓶，换5瓶，换2瓶，换1瓶，一共38瓶

int main()
{
	//n瓶n元
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
//			printf("找到了，下标是%d\n", mid);
//		break;//漏了！！
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	int sz = sizeof(arr) / sizeof(arr[0]);//10，包括空格和\0
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