#include<stdio.h>
#include<stdlib.h>
#include"mymath.h"

int main()
{
	int a, b, c, result;
	printf_s("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
	result = GCD(a, b);
	printf_s("(%d,%d) = %d\n", a, b, result);
	printf_s("Enter three integers : ");
	scanf_s("%d %d %d", &a, &b, &c);
	result = GCD(a, b, c);
	printf_s("(%d,%d,%d) = %d\n", a, b, c, result);
	system("pause");
}
