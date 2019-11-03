#include <stdio.h>
#include <stdlib.h>
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
		{
			printf_s("Return to Main Menu\n");
			break;
		}
		system("pause");
	}
}

void Mid1()
{
	int height, weight;
	double BMI;

	printf_s("********** P1 **********\n");
	printf_s("*   BMI Calculation    *\n");
	while(1)
	{
		printf_s("Please input the height : ");
		if (scanf_s("%d", &height) == EOF)
			break;
		printf_s("Please input the weight : ");
		if (scanf_s("%d", &weight) == EOF)
			break;
		BMI = weight / ((double)height * height / 10000);
		printf_s("BMI = %f\n", BMI);
		if (BMI >= 24)
			printf_s("體重過重\n");
		else if(BMI < 18.5)
			printf_s("體重過輕\n");
		else
			printf_s("體重適中\n");
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
			printf_s("x = %d\n", x1);
		else if(y1 == y2)
			printf_s("y = %d\n", y1);
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
		else if (isPrime(num))
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

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}

void printSymbol(int i, int j,int length)
{
	if ((i == j) || (i + j == length + 1))
		printf_s("%c ", '+');
	else
		printf_s("%c ", '*');
}
