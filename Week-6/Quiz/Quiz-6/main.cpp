#include<stdio.h>
#include<stdlib.h>
#include"func.h"

int main()
{
	int select, num1, num2;
	int result = 0;

	while(1)
	{
		printf_s("***************************\n");
		printf_s("* 1. 求兩數之最大公因數   *\n");
		printf_s("* 2. 求兩數之最小公倍數   *\n");
		printf_s("* 0. 結束程式             *\n");
		printf_s("***************************\n");
		printf_s("請輸入選項 : ");
		scanf_s("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
			case 1:
				printf_s("======求兩數之最大公因數======\n");
				printf_s("請輸入兩整數 : ");
				scanf_s("%d %d", &num1, &num2);
				result = gcd(num1, num2);
				printf_s("(%d,%d)=%d\n", num1, num2, result);
				break;
			case 2:
				printf_s("======求兩數之最小公倍數======\n");
				printf_s("請輸入兩整數 : ");
				scanf_s("%d %d", &num1, &num2);
				result = lcm(num1, num2);
				printf_s("[%d,%d]=%d\n", num1, num2, result);
				break;
			default:
				break;
		}
	}
	system("pause");
}
