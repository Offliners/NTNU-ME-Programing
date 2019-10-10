#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, length;
	printf_s("===============列印圖形===============\n");
	printf_s("Please input length : ");
	scanf_s("%d", &length);
	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= length; j++)
		{
			if ((i == j) || (i + j == length + 1))
				printf_s("%c ", 'X');
			else
				printf_s("%c ", 'O');
		}
		printf_s("\n");
	}
	system("pause");
}
