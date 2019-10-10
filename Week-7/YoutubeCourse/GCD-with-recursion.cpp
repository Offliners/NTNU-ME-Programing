#include<stdio.h>
#include<stdlib.h>

int GCD(int, int);

int main()
{
	int a, b, result;
	printf_s("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
	result = GCD(a, b);
	printf_s("(%d,%d)=%8d\n", a, b, result);
	system("pause");
}

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}
