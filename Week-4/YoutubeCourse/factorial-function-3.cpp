#include<stdio.h>
#include<stdlib.h>

int factorial();

int main()
{
	int result;
	result = factorial();
	printf_s("= %8d\n", result);
	system("pause");
}

int factorial()
{
	int product, i, n;
	product = 1;
	printf_s("Please enter number (1-10) : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		product *= i;
	printf_s("%2d! ", n);
	return product;
}
