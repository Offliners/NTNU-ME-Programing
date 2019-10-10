#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, sum;
	x = 0;
	sum = 0;
	while (x >= 0)
	{
		sum += x;
		printf_s("Enter x : ");
		scanf_s("%d", &x);
	}
	printf_s("sum = %d\n", sum);
	system("pause");
}
