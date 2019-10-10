#include<stdio.h>
#include<stdlib.h>
#include"arith.h"
#include"func1.h"

int main()
{
	int select;
	do
	{
		menu();
		printf_s("請選擇你要執行的程式 : ");
		scanf_s("%d", &select);
		if (select == 0)
		{
			printf_s("程式結束\n");
			break;
		}
		switch (select)
		{
		case 1:
			add();
			break;
		case 2:
			root_of_polynomial();
			break;
		case 3:
			multiplication_table();
			break;
		default:
			printf_s("輸入錯誤，請輸入數字1~3\n");
			break;
		}
	} while (1);
	system("pause");
}
