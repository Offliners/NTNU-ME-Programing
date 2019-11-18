#include<stdio.h>
#include<stdlib.h>

void Convert(char[]);

int main()
{
	char string[1000] = "";

	printf_s("Please enter a string :\n");
	scanf_s("%s", string, sizeof(string));
	printf_s("=========================\n");
	printf_s("Convert the input string :\n");
	Convert(string);
	system("pause");
}

void Convert(char string[])
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] > 96 && string[i] < 123)
			printf_s("%c", string[i] - 32);
		else
			printf_s("%c", string[i]);
		i++;
	}
	printf_s("\n");
}
