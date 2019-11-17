#include<stdio.h>
#include<stdlib.h>

int main()
{
	char color[10];
	char ch;
	int i = 0, j = 0;
	
	printf_s("Please enter a string :\n");
	while ((ch = getchar()) != '\n')
	{
		color[i] = ch;
		i++;
		if (i >= 10)
		{
			printf_s("Size of input string is larger than size of array!\n");
			break;
		}
	}
	printf_s("\nInput String = ");
	while (j <= i)
	{
		putchar(color[j]);
		j++;
	}
	printf_s("\n");
	system("pause");
}
