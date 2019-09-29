#include<stdio.h>
#include<stdlib.h>

int fibonacci(int num);

int main()
{
	int n, result;
	printf_s("Enter n (n > 1) : ");
	scanf_s("%d", &n);
	result = fibonacci(n);
	printf_s("fib(%d) = %8d\n", n, result);
	system("pause");
}

int fibonacci(int num)
{
	int i, a0, a1, a2;
	a0 = a1 = a2 = 1;
	if (num == 1 || num == 2)
		return 1;
	for (i = 3; i <= num; i++)
	{
		a2 = a1 + a0;
		a0 = a1;
		a1 = a2;
	}
	return a2;
}
