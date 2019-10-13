#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, p = 0;
	register int j, q = 0;
	int start, end;

	printf_s("%d\n", CLOCKS_PER_SEC);
	start = clock();
	for (j = 1; j <= 1000000000; j++)
		q++;
	end = clock();
	printf_s("%f\n", (float)(end - start) / CLOCKS_PER_SEC);

	start = clock();
	for (i = 1; i <= 1000000000; i++)
		p++;
	end = clock();
	printf_s("%f\n", (float)(end - start) / CLOCKS_PER_SEC);
	system("pause");
}
