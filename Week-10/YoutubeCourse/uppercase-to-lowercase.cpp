#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char string[1000] = "";
	int i = 0;
	
	printf_s("Please enter a string :\n");
	scanf_s("%s", string,sizeof(string));
	while (string[i] != '\0')
	{
		string[i] = toupper(string[i]);
		i++;
	}
	printf_s("Output String = %s\n",string);
	system("pause");
}
