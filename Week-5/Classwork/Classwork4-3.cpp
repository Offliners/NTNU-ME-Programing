#include<stdio.h>
#include<stdlib.h>

bool isPrime(int);

int main()
{
	int num;

	do
	{
		printf_s("輸入一整數<Ctrl z 結束程式> : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		if (isPrime(num))
			printf_s("%d為質數\n", num);
		else
			printf_s("%d為合數\n", num);
	} while (1);
	system("pause");
}

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}
