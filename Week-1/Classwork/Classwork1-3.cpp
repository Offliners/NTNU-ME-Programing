#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	printf_s("Please input a : ");
	scanf_s("%d", &a);
	printf_s("Please input b : ");
	scanf_s("%d", &b);
	c = (a * a - b * b * b) / (2 * a);
	printf_s("result=%d", c);
}
