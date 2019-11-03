#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Menu.h"
#include "Advance.h"


void Advance()
{
	int exit_adv;
	while (1)
	{
		exit_adv = 0;
		switch (AdvanceMenu())
		{
		case 0:
			exit_adv = 1;
			break;
		case 1:
			Mid5();
			break;
		case 2:
			Mid6();
			break;
		case 3:
			Mid7();
			break;
		default:
			printf_s("輸入錯誤\n");
			break;
		}
		if (exit_adv == 1)
		{
			printf_s("回主選單\n");
			break;
		}
		system("pause");
	}
}


void Mid5()
{
	int m, n;
	printf_s("**********第五題***********\n");
	printf_s("*        排列組合         *\n");
	while (1)
	{
		printf_s("請輸入m,n : ");
		if (scanf_s("%d %d", &m, &n) == EOF)
			break;
		printf_s("C(%d,%d)=%d\n", m, n, Combination(m, n));
	}
}

int Combination(int m, int n)
{
	float c = 1;
	int i;
	if (n > m / 2)
		n = m - n;
	for (i = 1; i <= n; i++)
		c *= ((float)(m - i + 1) / i);
	return (int)c;
}

void Mid6()
{
	int year;
	printf_s("**********第六題*************\n");
	printf_s("*    檢查某年是閏年或平年   *\n");
	while (1)
	{
		printf_s("請輸入年份 (1~3000): ");
		if (scanf_s("%d", &year) == EOF)
			break;
		if (year < 0 || year >3000)
			printf_s("年份必須介於 1~3000 之間\n");
		else
		{
			if (isLeap(year))
				printf_s("西元%d年為閏年\n", year);
			else
				printf_s("西元%d年為平年\n", year);
		}
	}
}

int isLeap(int year)
{
	int i = 0;
	if ((year % 4 != 0) || ((year % 100) == 0 && (year % 400) != 0))
		return 0;
	else
		return 1;
}

void Mid7()
{
	int num, divisor;
	printf_s("**********第七題*************\n");
	printf_s("*     某數的質因數分解      *\n");
	while (1)
	{
		printf_s("請輸入一個整數: ");
		if (scanf_s("%d", &num) == EOF)
			break;
		divisor = 2;
		while (num >= divisor)
		{
			if (isPrime(divisor))
			{
				while (num % divisor == 0)
				{
					num /= divisor;
					printf("%8d", divisor);
				}
			}
			divisor++;
		}
		printf("\n");
	}
}

int isPrime(int num)
{
	int i;
	if (num == 2 || num == 3)
		return 1;
	else
	{
		for (i = 2; i * i <= num; i++)
		{
			if (num % i == 0)
				return 0;
		}
		return 1;
	}
}
