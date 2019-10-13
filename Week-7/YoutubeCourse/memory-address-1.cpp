#include<stdio.h>
#include<stdlib.h>

void var();

int main()
{
	int i = 0;
	printf_s("The address of variable i in main() : %p\n", &i);
	var();
	system("pause");
}

void var()
{
	int i = 0;
	printf_s("The address of variable i in var() : %p\n", &i);
}
