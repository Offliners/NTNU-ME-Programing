#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double a, b, c, x1, x2, t;
	printf_s("**********************************************\n");
	printf_s("*   臺灣師範大學機電工程系108程式設計Quiz1   *\n");
	printf_s("*   求解一元二次方程式 ax^2+bx+c 的根        *\n");
	printf_s("**********************************************\n");
	printf_s("請依序輸入a,b,c之值 :");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	printf_s("a = %f  b = %f  c = %f\n", a, b, c);
	t = sqrt(b * b - 4 * a * c);
	x1 = (-b + t) / (2 * a);
	x2 = (-b - t) / (2 * a);
	printf_s("x1 = %f\n", x1);
	printf_s("x2 = %f\n", x2);
	system("pause");
}
