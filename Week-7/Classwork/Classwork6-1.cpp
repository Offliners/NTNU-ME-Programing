#include<stdio.h>
#include<stdlib.h>

int sumofSeries(int , int , int );

int main()
{
	int a, d, n, sum = 0;

	printf_s("S=a+(a+d)+(a+2d)+(a+3d)+…….+(a+(n-1)d)\n");
	printf_s("請輸入首項 : ");
	scanf_s("%d", &a);
	printf_s("請輸入公差 : ");
	scanf_s("%d", &d);
	printf_s("請輸入項數 : ");
	scanf_s("%d", &n);
	sum = sumofSeries(a, d, n);
	printf_s("Sum = %d\n", sum);
	system("pause");
}

int sumofSeries(int a, int d, int n)
{
	return a * n + d * n * (n - 1) / 2;
}
