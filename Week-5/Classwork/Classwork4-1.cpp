#include<stdio.h>
#include<stdlib.h>

bool isLeap(int);

int main()
{
	int year;

	do
	{
		printf_s("輸入年分<Ctrl z 結束程式> : ");
		if (scanf_s("%d", &year) == EOF)
			break;
		if (isLeap(year))
			printf_s("%d為閏年\n", year);
		else
			printf_s("%d為平年\n", year);
		printf_s("===========================\n");
	} while (1);
	system("pause");
}

bool isLeap(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}
