#include<stdio.h>
#include<stdlib.h>

int main()
{
	char caArr[5];
	int naArr[10];
	float faArr[15];
	double daArr[20];

	printf_s("Size of caArr = %d\n", sizeof(caArr));
	printf_s("Size of naArr = %d\n", sizeof(naArr));
	printf_s("Size of faArr = %d\n", sizeof(faArr));
	printf_s("Size of daArr = %d\n", sizeof(daArr));
	printf_s("====================================\n");
	printf_s("Number of elements of caArr = %d\n", sizeof(caArr)/sizeof(caArr[0]));
	printf_s("Number of elements of naArr = %d\n", sizeof(naArr) / sizeof(naArr[0]));
	printf_s("Number of elements of faArr = %d\n", sizeof(faArr) / sizeof(faArr[0]));
	printf_s("Number of elements of daArr = %d\n", sizeof(daArr) / sizeof(daArr[0]));
	system("pause");
}
