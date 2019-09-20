#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
			printf_s("%d*%d=%2d\t", j, i, j * i);
		printf_s("\n");
	}
	system("pause");
}
