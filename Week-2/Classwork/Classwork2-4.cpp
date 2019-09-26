#include<stdio.h>
#include<stdlib.h>

int main()
{
	int grade;
	printf_s("請輸入成績 : ");
	scanf_s("%d", &grade);
	switch (grade / 10)
	{
		case 10:
		case 9:
			printf_s("A\n");
			break;
		case 8:
			printf_s("B\n");
			break;
		case 7:
			printf_s("C\n");
			break;
		case 6:
			printf_s("D\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf_s("E\n");
			break;
		default:
			printf_s("輸入錯誤\n");
			break;
	}
	system("pause");
}
