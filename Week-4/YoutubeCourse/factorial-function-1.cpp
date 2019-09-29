#include<stdio.h>
#include<stdlib.h>

void factorial();

int main()
{
	factorial();
	system("pause");
}

void factorial()
{
	int product, i, j;
	for (i = 1; i <= 10; i++)
	{
		product = 1;
		for (j = 1; j <= i; j++)
			product *= j;
		printf_s("%2d! = %8d\n", i, product);
	}
}
