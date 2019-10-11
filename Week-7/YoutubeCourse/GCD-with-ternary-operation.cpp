#include<stdio.h>
#include<stdlib.h>

int GCD(int, int);

int main()
{
	int a, b, result;
	printf_s("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
	result = GCD(a, b);
	printf_s("(%d,%d)=%d\n", a, b, result);
	system("pause");
}

int GCD(int a, int b)
{
	return (a % b) == 0 ? b : GCD(b, a % b);
}
