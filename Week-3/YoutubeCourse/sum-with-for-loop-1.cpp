#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, i, sum;
	sum = 0;
	for (i = 1; i <= 5; i++	,sum += x)
	{
		printf_s("Enter x : ");
		scanf_s("%d", &x);
	}
	printf_s("sum = %d\n", sum);
	system("pause");
}
