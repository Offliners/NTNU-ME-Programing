#include<stdio.h>
#include<stdlib.h>
#include"calPi.h"

int main()
{
	char select;
	int term, i = 1;
	double pi;

	do
	{
		printf_s("==========第%d次測試==========\n", i);
		printf_s("pi=4-4/3+4/5-4/7+...\n");
		printf_s("Please input number of terms : ");
		scanf_s("%d", &term);
		pi = calculatePi(term);
		printf_s("pi=%f\n", pi);
		printf("Again? <Y or y>");
		scanf_s(" %c", &select, sizeof(select));
		i++;
	} while ((select == 'y') || (select == 'Y'));
	system("pause");
}
