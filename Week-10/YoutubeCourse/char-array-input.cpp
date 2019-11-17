#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	char caArr[10];

	printf_s("Please input 10 characters :\n");
	for (i = 0; i < 10; i++)
		scanf_s(" %c", &(caArr[i]),sizeof(caArr[i]));
	printf_s("\n");
	printf_s("The characters are :\n");
	for (i = 0; i < 10; i++)
		printf_s(" %c", caArr[i]);
	printf_s("\n");
	system("pause");
}
