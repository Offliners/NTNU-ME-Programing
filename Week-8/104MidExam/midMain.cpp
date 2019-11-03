#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
#include "advance.h"
#include "fundamental.h"

int main()
{
	int exit;
	while (1)
	{
		exit = 0;
		switch (mainMenu())
		{
			case 0:
				exit = 1;
				break;
			case 1:
				Fundamental();
				break;
			case 2:
				Advance();
				break;
			default:
				printf_s("輸入錯誤\n");
				system("pause");
				break;
		}
		if (exit == 1)
		{
			printf_s("結束程式\n");
			break;
		}
	}
	system("pause");
}
