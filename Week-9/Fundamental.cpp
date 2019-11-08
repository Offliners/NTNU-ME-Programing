#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "menu.h"
#include "fundamental.h"

void Fundamental()
{
	int exit_fund;
	while (1)
	{
		exit_fund = 0;
		switch (FundamentalMenu())
		{
		case 0:
			exit_fund = 1;
			break;
		case 1:
			Mid1();
			break;
		case 2:
			Mid2();
			break;
		case 3:
			Mid3();
			break;
		case 4:
			Mid4();
			break;
		default:
			printf("Input Error\n");
			break;
		}
		if (exit_fund == 1)
			break;
		system("pause");
	}
}

void Mid1()
{
	double a, b, c, delta;
	printf_s("**********第一題***********\n");
	printf_s("*    求 ax^2+bx+c=0 之根  *\n");
	while (1)
	{
		printf_s("請輸入a, b, c (兩數間用空白隔開) : ");
		if (scanf_s("%lf %lf %lf", &a, &b, &c) == EOF)
			break;
		if (a == 0)
		{
			printf_s("x^2的係數 a 不能為0\n");
			continue;
		}
		delta = b * b - 4 * a * c;
		if (delta > 0)
			printf_s("x=%lf or %lf\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
		else if (delta == 0)
			printf_s("x=%lf (重根)\n", -b / (2 * a));
		else
			printf_s("x=%lf+%lfi or %lf%lfi\n", -b / (2 * a), sqrt(-delta) / (2 * a), -b / (2 * a), -sqrt(-delta) / (2 * a));
	}
}

void Mid2()
{
	int x1, x2, y1, y2;
	double a, b;

	printf_s("********** P2 **********\n");
	printf_s("*     Line Equation    *\n");
	while (1)
	{
		printf_s("Please input the coordinate of point 1 : ");
		if (scanf_s("%d %d", &x1, &y1) == EOF)
			break;
		printf_s("Please input the coordinate of point 2 : ");
		if (scanf_s("%d %d", &x2, &y2) == EOF)
			break;
		if (x1 == x2)
			printf_s("x = %.2f\n", (float)x1);
		else if (y1 == y2)
			printf_s("y = %.2f\n", (float)y1);
		else
		{
			a = (float)(y1 - y2) / (x1 - x2);
			b = y1 - a * x1;
			if (b >= 0)
				printf_s("y = %.2f*x + %.2f\n", a, b);
			else
				printf_s("y = %.2f*x %.2f\n", a, b);
		}
	}
}

void Mid3()
{
	int num;

	printf_s("********** P3 **********\n");
	printf_s("*    Prime Judgment    *\n");
	while (1)
	{
		printf_s("Please input an integer number : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		if (num <= 1)
			printf_s("Input Error\n");
		else if (isItPrime(num))
			printf_s("%d是質數\n", num);
		else
			printf_s("%d不是質數\n", num);
	}
}

void Mid4()
{
	int length, i, j;

	printf_s("********** P4 **********\n");
	printf_s("*  Symbols Arrangement *\n");
	while (1)
	{
		printf_s("Please input side length (< 10) : ");
		if (scanf_s("%d", &length) == EOF)
			break;
		if (length > 10)
			printf_s("Input Error!\n");
		else
		{
			for (i = 1; i <= length; i++)
			{
				for (j = 1; j <= length; j++)
				{
					if (length % 2 != 0)
					{
						if ((i == length / 2 + 1) && (j == length / 2 + 1))
							printf_s("%c ", 'O');
						else
							printSymbol(i, j, length);
					}
					else
						printSymbol(i, j, length);
				}
				printf_s("\n");
			}
		}
	}
}

void printSymbol(int i, int j, int length)
{
	if ((i == j) || (i + j == length + 1))
		printf_s("%c ", '+');
	else
		printf_s("%c ", '*');
}

bool isItPrime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}
