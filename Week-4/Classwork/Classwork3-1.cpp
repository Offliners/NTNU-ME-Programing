#include<stdio.h>
#include<stdlib.h>

int power(int x, int y);

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			printf_s("%4d^%d=%4d", j, i, power(j, i));
		printf_s("\n");
	}
	system("pause");
}

int power(int x, int y)
{
	int t, sum = x;
	for (t = 1; t < y; t++)
		sum *= x;
	return sum;
}
