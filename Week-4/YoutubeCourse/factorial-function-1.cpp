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
	int product, i, n;
	product = 1;
	printf_s("Please enter number (1-10) : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		product *= i;
	printf_s("%2d! = %8d\n", n, product);
}
