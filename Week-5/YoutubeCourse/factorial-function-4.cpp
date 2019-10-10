#include<stdio.h>
#include<stdlib.h>

int factorial(int n);

int main()
{
	int result,num;
	printf_s("Please enter number (1-10) : ");
	scanf_s("%d", &num);
	result = factorial(num);
	printf_s("%2d! = %8d\n", num, result);
	system("pause");
}

int factorial(int n)
{
	int product, i;
	product = 1;
	for (i = 1; i <= n; i++)
		product *= i;
	return product;
}
