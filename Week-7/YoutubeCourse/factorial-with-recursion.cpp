#include<stdio.h>
#include<stdlib.h>

int fac(int);

int main()
{
	int a;
	printf_s("Factorial, enter n : ");
	scanf_s("%d", &a);
	printf_s("%d!=%d\n", a, fac(a));
	system("pause");
}

int fac(int n)
{
	if ((n == 1)||(n == 0))
		return 1;
	else
		return fac(n - 1) * n;
}
