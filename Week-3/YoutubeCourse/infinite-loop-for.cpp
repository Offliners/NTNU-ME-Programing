#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, sum;
	sum = 0;
	for(;;)
	{
		printf_s("Enter x : ");
		scanf_s("%d", &x);
		if (x < 0)
			break;
		sum += x;
	}
	printf_s("sum = %d\n", sum);
	system("pause");
}
