#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, now1;
	now1 = time(NULL);
	srand(now1);
	printf_s("======================= Time Seed : %d =======================\n", now1);
	for (i = 1; i <= 10; i++)
	{
		printf_s("%10d", 1 + rand() % 6);
		if (i % 5 == 0)
			printf_s("\n");
	}
	system("pause");
}
