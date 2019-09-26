#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count = 1;
	double t, pi = 0;
	printf_s("pi=4-4/3+4/5-4/7+...\n");
	printf_s("Please input tolerance : ");
	scanf_s("%lf", &t);
	while(1)
	{	
		if (4 / (2.0 * count - 1) < t)
			break;
		if (count % 2 == 0)
			pi += -4 / (2.0 * count - 1);
		else
			pi += 4 / (2.0 * count - 1);
		count++;
	}
	printf_s("Term used : %d\n", count);
	printf_s("pi=%f\n", pi);
	system("pause");
}
