#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i;
	printf_s("請輸入一個整數 : ");
	scanf_s("%d", &num);
	printf_s("%d的因數有 L\n", num);
	for (i = 1; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			if (i == num / i)
				printf_s("%8d\n", i);
			else
				printf_s("%8d,%8d\n", i, num / i);
		}
	}
	system("pause");
}
