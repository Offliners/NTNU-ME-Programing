#include<stdio.h>
#include<stdlib.h>

int sum(int);

int main()
{
	int a;
	printf_s("Sum of series, enter n : ");
	scanf_s("%d", &a);
	printf_s("S(%d)=%d\n", a, sum(a));
	system("pause");
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return sum(n - 1) + n;
}
