#include <stdio.h>
#include <stdlib.h>
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
		default:
			printf_s("Input Error\n");
			break;
		}
		if (exit_adv == 1)
			break;
		system("pause");
	}
}

void Mid5()
{
	int num;

	printf_s("************** P5 **************\n");
	printf_s("* Table of Permutation P(m, n) *\n");
	while (1)
	{
		printf_s("Please input m (<= 6) : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		for (int i = 1; i <= num; i++)
		{
			for (int j = 0; j <= i; j++)
				printf_s("P%d%d=%d\t", i, j, Permutation(i, j));
			printf_s("\n");
		}
		printf_s("\n");
	}
}

void Mid6()
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

int Permutation(int m, int n)
{
	if (m == n)
		return factorial(m);
	else
		return factorial(m) / factorial(m - n);
}

int factorial(int n)
{
	if ((n == 1) || (n == 0))
		return 1;
	else
		return factorial(n - 1) * n;
}
