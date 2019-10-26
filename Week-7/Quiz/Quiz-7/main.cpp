#include<stdio.h>
#include<stdlib.h>
#include"menu.h"
#include"func.h"

int main()
{
	int exit_main, exit_sub;

	while (1)
	{
		exit_main = 0;
		switch (mainMenu())
		{
			case 0:
				printf_s("程式結束\n");
				exit_main = 1;
				break;
			case 1:
				exit_sub = 0;
				while (1)
				{
					switch (recusiveMenu())
					{
						case 0:
							printf_s("回主選單\n");
							exit_sub = 1;
							system("pause");
							break;
						case 1:
							int num1, num2;
							printf_s("======最大公因數======\n");
							printf_s("請輸入兩個整數 : ");
							scanf_s("%d %d", &num1, &num2);
							printf_s("(%d,%d) = %d\n", num1, num2, gcd(num1, num2));
							system("pause");
							break;
						case 2:
							int num;
							printf_s("======階乘======\n");
							printf_s("請輸入一整數 : ");
							scanf_s("%d", &num);
							printf_s("%d! = %d\n", num, factorial(num));
							system("pause");
							break;
						default:
							printf_s("輸入錯誤\n");
							system("pause");
							break;
					}
					if (exit_sub == 1)
						break;
				}
				break;
			case 2:
				exit_sub = 0;
				while (1)
				{
					switch (TernaryOperatorMenu())
					{
						case 0:
							printf_s("回主選單\n");
							exit_sub = 1;
							system("pause");
							break;
						case 1:
							int n;
							printf_s("======列印前n項之費波納西數列======\n");
							printf_s("請輸入一整數 : ");
							scanf_s("%d", &n);
							for (int i = 0; i <= n; i++)
								printf_s("fib(%d) = %d\n", i, fibonacci(i));
							system("pause");
							break;
						default:
							printf_s("輸入錯誤\n");
							system("pause");
							break;
					}
					if (exit_sub == 1)
						break;
				}
				break;
			default:
				printf_s("輸入錯誤\n");
				break;
		}
		if (exit_main == 1)
			break;
	}
	system("pause");
}
