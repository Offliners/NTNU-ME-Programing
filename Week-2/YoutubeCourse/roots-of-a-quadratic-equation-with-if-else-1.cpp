#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c, t;
	printf_s("請依序輸入a,b,c之值，兩數之間以空格隔開 :");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	printf_s("a = %f  b = %f  c = %f\n", a, b, c);
	t = b * b - 4 * a * c;
	if (t > 0)
		printf_s("兩相異實根\n");
	else if (t == 0)
		printf_s("相同實根\n");
	else
		printf_s("共軛虛根\n");
	system("pause");
}
