#include<stdio.h>
#include<stdlib.h>

int main()
{
	char color[10];
	
	printf_s("Please input a string(小於10個char) :\n");
	scanf_s("%s", color,sizeof(color));
	printf_s("Input string = %s\n", color);
	printf_s("Please input a string(大於10個char) :\n");
	scanf_s("%s", color,sizeof(color));
	printf_s("Input string = %s\n", color);
	system("pause");
}
