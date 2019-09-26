#include<stdio.h>
#include<stdlib.h>

int main()
{
	int grade;
	printf_s("請輸入成績 : ");
	scanf_s("%d", &grade);
	if (grade < 0 || grade > 100)
		printf_s("輸入錯誤\n");
	else
	{
		if(grade < 60)
			printf_s("E\n");
		else
		{
			if(grade < 70)
				printf_s("D\n");
			else
			{
				if(grade < 80)
					printf_s("C\n");
				else
				{
					if(grade < 90)
						printf_s("B\n");
					else
						printf_s("A\n");
				}
			}
		}
	}
	system("pause");
}
