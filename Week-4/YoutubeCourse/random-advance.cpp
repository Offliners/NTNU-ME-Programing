#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int myRand(int lower, int upper);

int main()
{
	int i, n, now1, lower, upper;
	printf_s("What is the range of random number (lower,upper)? ");
	scanf_s("%d %d", &lower, &upper);
	printf_s("How many random number? ");
	scanf_s("%d", &n);
	now1 = time(NULL);
	srand(now1);
	for (i = 1; i <= n; i++)
	{
		printf_s("%10d", myRand(lower, upper));
		if (i % 5 == 0)
			printf_s("\n");
	}
	system("pause");
}

int myRand(int lower, int upper)
{
	return lower + rand() % (upper - lower + 1);
}
