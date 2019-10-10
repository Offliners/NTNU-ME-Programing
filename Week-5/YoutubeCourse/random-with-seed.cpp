#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, seed;
	printf_s("=========================== With Seed ===========================\n");
	printf_s("Enter seed : ");
	scanf_s("%d", &seed);
	srand(seed);
	for (i = 1; i <= 10; i++)
	{
		printf_s("%10d", 1 + rand() % 6);
		if (i % 5 == 0)
			printf_s("\n");
	}
	system("pause");
}
