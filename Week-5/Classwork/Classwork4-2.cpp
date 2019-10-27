#include<stdio.h>
#include<stdlib.h>

int noOfLeap(int, int);
bool isLeap(int);

int main()
{
	int start, end;

	do
	{
		printf_s("輸入起始年分與結束年分<Ctrl Z結束程式> : ");
		if (scanf_s("%d %d", &start, &end) == EOF)
			break;
		printf_s("%d~%d共有%d個閏年\n", start, end, noOfLeap(start, end));
	} while (1);
	system("pause");
}

int noOfLeap(int start, int end)
{
	int i, count = 0;

	for (i = start; i <= end; i++)
		if (isLeap(i))
			count++;
	return count;
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
