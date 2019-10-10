#include<stdio.h>
#include<stdlib.h>

int fib(int);

int main()
{
	int n, result;
	printf_s("Enter n (n >= 1) : ");
	scanf_s("%d", &n);
	result = fib(n);
	printf_s("fib(%d)=%8d\n", n, result);
	system("pause");
}

int fib(int n)
{
	if ((n == 1) || (n == 2))
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
