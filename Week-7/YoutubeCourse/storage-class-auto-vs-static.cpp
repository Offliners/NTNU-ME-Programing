#include<stdio.h>
#include<stdlib.h>

int var();
int var_s();

int main()
{
	int i;
	for (i = 1; i <= 5; i++)
		printf_s("Call var() %d times\n", var());
	for (i = 1; i <= 5; i++)
		printf_s("Call var()_s %d times\n", var_s());
	system("pause");
}

int var()
{
	int i = 0;
	i++;
	return i;
}

int var_s()
{
	static int i = 0;
	i++;
	return i;
}
