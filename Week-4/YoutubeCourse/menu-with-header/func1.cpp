#include<stdio.h>

void menu()
{
	printf_s("==========程式選單==========\n");
	printf_s("0. 離開程式\n");
	printf_s("1. 計算兩數之和\n");
	printf_s("2. 一元二次方程式的根\n");
	printf_s("3. 九九乘法表\n");
	printf_s("============================\n");
}

void multiplication_table()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
			printf_s("%d*%d=%2d", j, i, i * j);
		printf_s("\n");
	}
}
