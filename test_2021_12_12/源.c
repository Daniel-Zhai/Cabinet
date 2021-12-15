#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10] = &arr;
	return 0;
}