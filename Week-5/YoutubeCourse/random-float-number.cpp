#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, n;
	printf_s("How many random number? ");
	scanf_s("%d", &n);
	srand(time(NULL));
	for (i = 1; i <= n; i++)
	{
		printf_s("%10.6f", (float)rand() / RAND_MAX);
		if (i % 5 == 0)
			printf_s("\n");
	}
	system("pause");
}
