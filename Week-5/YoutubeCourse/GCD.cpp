#include<stdio.h>
#include<stdlib.h>

int GCD(int num1, int num2);

int main()
{
	int a, b, result;
	printf_s("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
	result = GCD(a, b);
	printf_s("(%d,%d) = %d\n", a, b, result);
	system("pause");
}

int GCD(int num1, int num2)
{
	int temp;
	while (num1 % num2 != 0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	return num2;
}
