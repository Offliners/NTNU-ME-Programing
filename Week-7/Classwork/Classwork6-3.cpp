#include<stdio.h>
#include<stdlib.h>

int reverse(int , int);

int main()
{
	int num;

	while (1)
	{
		printf_s("Enter a number : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		if (num < 0 || num > 999999999)
			printf_s("輸入數字不合法!\n");
		else
			printf_s("The reserved number is %d\n", reverse(num, 0));
	}
	system("pause");
}

int reverse(int num, int rev)
{
	if (num == 0)
		return rev;
	else
		return reverse(num / 10, rev * 10 + num % 10);
}
