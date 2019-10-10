#include<stdio.h>
#include<stdlib.h>

void factorial(int n);

int main()
{
	int num;
	printf_s("Please enter number (1-10) : ");
	scanf_s("%d", &num);
	factorial(num);
	system("pause");
}

void factorial(int n)
{
	int product, i;
	product = 1;
	for (i = 1; i <= n; i++)
		product *= i;
	printf_s("%2d! = %8d\n", n, product);
}
