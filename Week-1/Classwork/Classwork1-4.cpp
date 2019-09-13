#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c;
	printf_s("Please input a : ");
	scanf_s("%lf", &a);
	printf_s("Please input b : ");
	scanf_s("%lf", &b);
	c = (a * a - b * b * b) / (2 * a);
	printf_s("result=%f", c);
}
