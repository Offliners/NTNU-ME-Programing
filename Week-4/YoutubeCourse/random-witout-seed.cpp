#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	printf_s("Rand Max = %d\n", RAND_MAX);
	printf_s("=========================== Without Seed ===========================\n");
	for (i = 1; i <= 10; i++)
	{
		printf_s("%10d", 1 + rand() % 6);
		if (i % 5 == 0)
			printf_s("\n");
	}
	system("pause");
}
