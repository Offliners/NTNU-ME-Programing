#include<stdio.h>
#include<stdlib.h>

void Reverse(char[]);

int main()
{
	char string[1000] = "";

	printf_s("Please enter a string :\n");
	scanf_s("%s", string, sizeof(string));
	printf_s("=========================\n");
	printf_s("Reverse the input string :\n");
	Reverse(string);
	system("pause");
}

void Reverse(char string[])
{
	int count = 0;

	while (string[count] != '\0')
		count++;
	for (int i = count - 1; i >= 0; i--)
		printf_s("%c", string[i]);
	printf_s("\n");
}
