#include<stdio.h>
#include<stdlib.h>

int main()
{
	extern double evar;
	printf_s("%f\n", evar);
	system("pause");
}
