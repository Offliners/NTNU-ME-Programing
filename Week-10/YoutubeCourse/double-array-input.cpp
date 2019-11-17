#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	double daArr[10];

	printf_s("Please input 10 characters :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%lf", &(daArr[i]));
	printf_s("\n");
	printf_s("The characters are :\n");
	for (i = 0; i < 10; i++)
		printf_s(" %f", daArr[i]);
	printf_s("\n");
	system("pause");
}
