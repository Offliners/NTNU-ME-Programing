#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double Sqrt(int);

int main()
{
	int num;

	printf_s("Please input a num : ");
	scanf_s("%d", &num);
	printf_s("sqrt(%d) = %f\n", num, Sqrt(num));
	system("pause");
}

double Sqrt(int num)
{
	double n = 1;

	while (fabs(n * n - num) >= 1e-6)
		n = 0.5 * (n + num / n);
	return n;
}

