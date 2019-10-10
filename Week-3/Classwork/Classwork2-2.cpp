#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x1, y1, x2, y2;
	double m, b;
	printf_s("請輸入第一個點座標 :");
	scanf_s("%d %d", &x1, &y1);
	printf_s("請輸入第二個點座標 :");
	scanf_s("%d %d", &x2, &y2);
	if (x1 == x2)
		printf_s("直線方程式 : x=%d\n", x1);
	else if (y1 == y2)
		printf_s("直線方程式 : y=%d\n", y1);
	else
	{
		m = (float)(y1 - y2) / (x1 - x2);
		b = y1 - m * x1;
		if (b < 0)
			printf_s("直線方程式 : y=%fx%f\n", m, b);
		else
			printf_s("直線方程式 : y=%fx+%f\n", m, b);
	}
	system("pause");
}
