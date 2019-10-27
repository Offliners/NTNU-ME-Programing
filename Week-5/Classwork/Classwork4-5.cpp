#include<stdio.h>
#include<stdlib.h>

bool isPrime(int);

int main()
{
	int num;

	do
	{
		int count = 0;

		printf_s("輸入一個正整數<Ctrl z 結束程式> : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		printf_s("==========%d以內的質數==========\n", num);
		for (int i = 2; i <= num; i++)
		{
			if (isPrime(i))
			{
				count++;
				printf_s("%8d ", i);
				if (count % 10 == 0)
					printf_s("\n");
			}
		}
		printf_s("\n");
	} while (1);
	system("pause");
}

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}
