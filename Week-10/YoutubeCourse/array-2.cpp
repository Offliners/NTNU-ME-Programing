#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int naArr1[5];
	int naArr2[5] = { 1 };
	int naArr3[5] = { 1,2,3 };
	int naArr4[] = { 1,5,3,4,2 };
	int naArr5[] = { 1,2,3 };
	char caArr6[5] = { 'a','b','c','d','e' };
	double daArr7[5] = { 1,2,3,4,5 };

	for (i = 0; i <= 4; i++)
		printf_s("  %d", naArr1[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %d", naArr2[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %d", naArr3[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %d", naArr4[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %d", naArr5[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %c", caArr6[i]);
	printf_s("\n");
	for (i = 0; i <= 4; i++)
		printf_s("  %f", daArr7[i]);
	printf_s("\n");
	system("pause");
}
