#include <stdio.h>
#include <stdlib.h>

int mainMenu()
{
	int select;
	system("cls");
	printf_s("==========104 期中考選單==========\n");
	printf_s("1. 基礎題\n");
	printf_s("2. 進階題\n");
	printf_s("0. 結束程式\n");
	printf_s("請輸入選項:\n");
	scanf_s("%d", &select);
	return select;
}

int FundamentalMenu()
{
	int select;
	system("cls");
	printf_s("==========基礎題選單==========\n");
	printf_s("1. 第一題\n");
	printf_s("2. 第二題\n");
	printf_s("3. 第三題\n");
	printf_s("4. 第四題\n");
	printf_s("0. 回主選單\n");
	printf_s("請輸入選項:\n");
	scanf_s("%d", &select);
	return select;
}

int AdvanceMenu()
{
	int select;
	system("cls");
	printf_s("==========進階題題選單==========\n");
	printf_s("1. 第五題\n");
	printf_s("2. 第六題\n");
	printf_s("3. 第七題\n");
	printf_s("0. 回主選單\n");
	printf_s("請輸入選項:\n");
	scanf_s("%d", &select);
	return select;
}
