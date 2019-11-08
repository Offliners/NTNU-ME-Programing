#include <stdio.h>
#include <stdlib.h>

int mainMenu()
{
	int select;
	system("cls");
	printf_s("==========Menu For 108 MidExam==========\n");
	printf_s("1. Fundamentals\n");
	printf_s("2. Advance\n");
	printf_s("0. Exit\n");
	printf_s("Please give your selection :\n");
	scanf_s("%d", &select);
	return select;
}

int FundamentalMenu()
{
	int select;
	system("cls");
	printf_s("==========Menu For Fundamental Problems==========\n");
	printf_s("1. P1\n");
	printf_s("2. P2\n");
	printf_s("3. P3\n");
	printf_s("4. P4\n");
	printf_s("0. Main Menu\n");
	printf_s("Please give your selection :\n");
	scanf_s("%d", &select);
	return select;
}

int AdvanceMenu()
{
	int select;
	system("cls");
	printf_s("==========Menu For Advance Program==========\n");
	printf_s("1. P5\n");
	printf_s("2. P6\n");
	printf_s("0. Main Menu\n");
	printf_s("Please give your selection :\n");
	scanf_s("%d", &select);
	return select;
}
