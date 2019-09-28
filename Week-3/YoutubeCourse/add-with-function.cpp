#include<stdio.h>
#include<stdlib.h>

void add();

int main()
{
	add();
	system("pause");
}

void add()
{
	int x, y, z;
	printf_s("Please enter x : ");
	scanf_s("%d", &x);
	printf_s("Please enter y : ");
	scanf_s("%d", &y);
	z = x + y;
	printf_s("x + y = %d\n", z);
}
