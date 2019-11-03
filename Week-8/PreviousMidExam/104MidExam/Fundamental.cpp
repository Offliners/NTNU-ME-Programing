#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
				printf("輸入錯誤\n");
				break;
		}
		if (exit_fund == 1)
		{
			printf_s("回主選單\n");
			break;
		}
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
	int num;
	printf_s("**********第二題***********\n");
	printf_s("*         數字反轉        *\n");
	while (1)
	{
		printf_s("請輸入一個整數 (<= 10 位數): ");
		if (scanf_s("%d", &num) == EOF)
			break;
		if (num < 0 || num > 999999999)
			printf_s("輸入錯誤\n");
		else
			printf_s("Reverse of %d is %d\n", num, reverse(num, 0));
	}
}

int reverse(int num, int rev)
{
	if (num == 0)
		return rev;
	else
		return reverse(num / 10, rev * 10 + num % 10);
}

void Mid3()
{
	int score;
	printf_s("**********第四題***********\n");
	printf_s("*       分數轉等第        *\n");
	while (1)
	{
		printf_s("請輸入分數: ");
		if (scanf_s("%d", &score) == EOF)
			break;
		if (score < 0 || score >100)
		{
			printf_s("分數必須介於 0 ~100 之間\n");
			continue;
		}
		printf_s("%d分之等第為%c\n", score, scoreToGrade(score));
	}
}

char scoreToGrade(int score)
{
	char grade;
	score = score / 10;
	switch (score)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'E';
		break;
	}
	return grade;
}

void Mid4()
{
	int outer, inner;
	printf_s("**********第四題***********\n");
	while (1)
	{
		printf_s("請輸入外圈及內圈長度 (<10): ");
		if (scanf_s("%d %d", &outer, &inner) == EOF)
			break;
		if (inner > outer)
		{
			printf_s("內圈長度必須小於外圈長度\n");
			if ((inner + outer) % 2 == 1)
				printf_s("內圈長度與外圈長度必須同為奇數或同為偶數\n");
		}
		else
		{
			if ((inner + outer) % 2 == 1)
				printf_s("內圈長度與外圈長度必須同為奇數或同為偶數\n");
			else
				Heart(outer, inner);
		}
	}
}

void Heart(int outer, int inner)
{
	int start, end, i, j;
	start = 1 + (outer - inner) / 2;
	end = (outer + inner) / 2;

	for (i = 1; i <= outer; i++)
	{
		for (j = 1; j <= outer; j++)
		{
			if ((i >= start && i <= end) && (j >= start && j <= end))
				printf_s("  ");
			else
				printf_s(" %c", '*');
		}
		printf_s("\n");
	}
}
