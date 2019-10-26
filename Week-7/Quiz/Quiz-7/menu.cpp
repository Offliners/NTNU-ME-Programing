#include<stdio.h>
#include<stdlib.h>

int mainMenu()
{
	int select;
	system("cls");
	printf_s("======主選單======\n");
	printf_s("1. 遞迴問題\n");
	printf_s("2. 遞迴&三元運算\n");
	printf_s("0. 結束程式\n");
	printf_s("請輸入選項 : ");
	scanf_s("%d", &select);
	return select;
}

int recusiveMenu()
{
	int select;
	system("cls");
	printf_s("======遞迴問題選單======\n");
	printf_s("1. 最大公因數\n");
	printf_s("2. 階乘\n");
	printf_s("0. 回主選單\n");
	printf_s("請輸入選項 : ");
	scanf_s("%d", &select);
	return select;
}

int TernaryOperatorMenu()
{
	int select;
	system("cls");
	printf_s("======遞迴&三元問題選單======\n");
	printf_s("1. 列印前n項之費波納西數列\n");
	printf_s("0. 回主選單\n");
	printf_s("請輸入選項 : ");
	scanf_s("%d", &select);
	return select;
}
