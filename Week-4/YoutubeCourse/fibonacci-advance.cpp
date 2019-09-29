#include<stdio.h>
#include<stdlib.h>

int fibonacci(int num,int aa,int bb);

int main()
{
	int a, b, n, result;
	printf_s("Enter n (n > 1) : ");
	scanf_s("%d", &n);
	printf_s("Enter initial condition : ");
	scanf_s("%d %d", &a, &b);
	result = fibonacci(n, a, b);
	printf_s("fib(%d) = %8d\n", n, result);
	system("pause");
}

int fibonacci(int num, int aa, int bb)
{
	int i, a0, a1, a2;
	if (num == 1)
		return aa;
	else if (num == 2)
		return bb;
	a0 = aa;
	a1 = bb;
	a2 = 0;
	for (i = 3; i <= num; i++)
	{
		a2 = a1 + a0;
		a0 = a1;
		a1 = a2;
	}
	return a2;
}
