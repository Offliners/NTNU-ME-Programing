#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, max;
	int naArr[10];

	printf_s("Please input 10 characters :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &(naArr[i]));
	max = naArr[0];
	for (i = 0; i < 10; i++)
		if (naArr[i] > max)
			max = naArr[i];
	printf_s("Max = %d\n", max);
	system("pause");
}
