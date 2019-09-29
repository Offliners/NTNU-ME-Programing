#include<stdio.h>
#include<stdlib.h>

int GCD(int num1, int num2);

int main()
{
	int a, b, c, result;
	printf_s("Enter three integers : ");
	scanf_s("%d %d %d", &a, &b, &c);
	result = GCD(GCD(a, b), c);
	printf_s("(%d,%d,%d) = %d\n", a, b, c, result);
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
