#include<stdio.h>
#include<stdlib.h>

int power(int,int);

int main()
{
	int a,b;
	printf_s("Power, enter two integers : ");
	scanf_s("%d %d", &a, &b);
	printf_s("%d^%d=%8d\n", a, b, power(a, b));
	system("pause");
}

int power(int a,int b)
{
	if (b == 0)
		return 1;
	else
		return power(a, b - 1) * a;
}
