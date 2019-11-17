#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, sum = 0;
	int naArr[10];

	printf_s("Please input 10 characters :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &(naArr[i]));
	for (i = 0; i < 10; i++)
		sum += naArr[i];
	printf_s("Sum = %d\n", sum);
	system("pause");
}
