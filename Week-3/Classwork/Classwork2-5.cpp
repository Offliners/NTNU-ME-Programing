#include<stdio.h>
#include<stdlib.h>

int main()
{
	int term, i;
	float pi = 0;
	printf_s("pi=4-4/3+4/5-4/7+...\n");
	printf_s("Please input number of terms : ");
	scanf_s("%d", &term);
	for (i = 1; i <= term; i++)
	{
		if (i % 2 == 0)
			pi -= 4 / (float)(2 * i - 1);
		else
			pi += 4 / (float)(2 * i - 1);
	}
	printf_s("pi=%f\n", pi);
	system("pause");
}
