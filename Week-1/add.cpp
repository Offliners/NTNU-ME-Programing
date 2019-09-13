#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y, z;
	printf_s("Please enter x : ");
	scanf_s("%d", &x);
	printf_s("Please enter y : ");
	scanf_s("%d", &y);
	z = x + y;
	printf_s("x + y = %d\n", z);
	system("pause");
}
