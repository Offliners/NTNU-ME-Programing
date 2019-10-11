#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, max;
	printf_s("Enter two numbers :");
	scanf_s("%d %d", &a, &b);
	printf_s("==========Method 1==========\n");
	if (a > b)
		printf_s("Max=%d\n", a);
	else
		printf_s("Max=%d\n", b);

	printf_s("==========Method 2==========\n");
	(a>b)? printf_s("Max=%d\n", a): printf_s("Max=%d\n", b);

	printf_s("==========Method 3==========\n");
	max = (a > b) ? a : b;
	printf_s("Max=%d\n", max);

	printf_s("==========Method 4==========\n");
	printf_s("Max=%d\n", (a > b) ? a : b);

	system("pause");
}
