#include<stdio.h>

void add()
{
	int x, y;
	printf_s("Please enter x : ");
	scanf_s("%d", &x);
	printf_s("Please enter y : ");
	scanf_s("%d", &y);
	printf_s("x + y = %d\n", x + y);
}

void root_of_polynomial()
{
	double a, b, c, t, x1, x2;
	printf_s("請依序輸入a,b,c之值，兩數之間以空格隔開 : ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	printf_s("a=%f b=%f c=%f\n", a, b, c);
	t = b * b - 4 * a * c;
	if (t > 0)
		printf_s("兩相異實根\n");
	else if (t == 0)
		printf_s("相同實根\n");
	else
		printf_s("共軛虛根\n");
}
