#include<stdio.h>
#include<stdlib.h>

bool isPrime(int);
int noOfPrime(int);

int main()
{
	int num;

	do
	{
		printf_s("輸入一整數<Ctrl z 結束程式> : ");
		if (scanf_s("%d", &num) == EOF)
			break;
		printf_s("%d內共有%d個質數\n", num, noOfPrime(num));
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

int noOfPrime(int num)
{
	int i, count = 0;

	for (i = 2; i <= num; i++)
		if (isPrime(i))
			count++;
	return count;
}
