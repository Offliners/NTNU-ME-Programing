#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 20; i++)
	{
		if (i % 3 == 0)
			continue;
		sum += i;
	}
	printf_s("sum = %d\n", sum);
	system("pause");
}
