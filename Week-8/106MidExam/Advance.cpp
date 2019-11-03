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
		{
			printf_s("Return to Main Menu\n");
			break;
		}
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
		for (int i = 1; i <= num;i++)
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
	int num, i, j, temp;

	printf_s("************** P6 **************\n");
	printf_s("*        Reverse Number        *\n");
	while (1)
	{
		printf_s("Please input an integer (<= 10 digits) : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		if (num < 0 || num > 999999999)
			printf_s("Error Input!\n");
		else
		{
			temp = num;
			for (i = 0; temp % 10 == 0; i++)
				temp /= 10;
			printf_s("Reverse of %d is ", num);
			for (j = 0; j <= i - 1; j++)
				printf_s("0");
			printf_s("%d\n", reverse(num, 0));
		}
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
 
int reverse(int num, int rev)
{
	if (num == 0)
		return rev;
	else
		return reverse(num / 10, rev * 10 + num % 10);
}
