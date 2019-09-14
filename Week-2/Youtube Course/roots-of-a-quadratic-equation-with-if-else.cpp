#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double a, b, c, x1, x2, t;
	printf_s("請依序輸入a,b,c之值，兩數之間以空格隔開 :");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	printf_s("a = %f  b = %f  c = %f\n", a, b, c);
	t = b * b - 4 * a * c;
	if (t >= 0)
	{
		t = sqrt(b * b - 4 * a * c);
		x1 = (-b + t) / (2 * a);
		x2 = (-b - t) / (2 * a);
		printf_s("x1 = %f x2 = %f\n", x1, x2);
	}
	else
		printf_s("%lfx^2+%lfx+%lf=0 無實根\n", a, b, c);
	system("pause");
}
