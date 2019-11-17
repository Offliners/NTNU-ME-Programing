#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int naArr[10];

	printf_s("Please input 10 integers :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &(naArr[i]));
	printf_s("\n");
	printf_s("The integers are :\n");
	for (i = 0; i < 10; i++)
		printf_s(" %d", naArr[i]);
	printf_s("\n");
	system("pause");
}
