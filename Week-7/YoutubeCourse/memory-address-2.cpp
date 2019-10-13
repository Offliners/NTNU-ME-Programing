#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cx = 0;
	int nx = 1;
	float fx = 2;
	double dx = 3;

	printf_s("The address of cx : %p\n", &cx);
	printf_s("The address of nx : %p\n", &nx);
	printf_s("The address of fx : %p\n", &fx);
	printf_s("The address of dx : %p\n", &dx);

	printf_s("The size of cx : %d\n", sizeof(cx));
	printf_s("The size of nx : %d\n", sizeof(nx));
	printf_s("The size of fx : %d\n", sizeof(fx));
	printf_s("The size of dx : %d\n", sizeof(dx));

	system("pause");
}
