#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 6;
	printf_s("while : \n");
	while (i <= 5)
	{
		printf_s("%d\n", i);
		i++;
	}
	printf_s("Final i = %d\n",i);
	printf_s("\n");
	i = 6;
	printf_s("do while : \n");
	do
	{
		printf_s("%d\n", i);
		i++;
	} while (i <= 5);
	printf_s("Final i = %d\n",i);
	system("pause");
}
