#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, i, sum;
	sum = 0;
	i = 1;
	do
	{
		printf_s("Enter x : ");
		scanf_s("%d", &x);
		sum += x;
		i++;
	}while (i <= 5);
	printf_s("sum = %d\n", sum);
	system("pause");
}
