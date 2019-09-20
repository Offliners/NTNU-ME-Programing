#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	i = 1;
	while(i<=9)
	{
		j = 1;
		while (j <= 9)
		{
			printf_s("%d*%d=%2d\t", j, i, j * i);
			j++;
		}
		i++;
		printf_s("\n");
	}
	system("pause");
}
