#include<stdio.h>
#include<stdlib.h>

void TOH(int, char, char, char);

int main()
{
	int n;
	printf_s("Enter number of plates : ");
	scanf_s("%d", &n);
	printf_s("\tmove method\tdisk number\n");
	TOH(n, 'A', 'B', 'C');
	system("pause");
}

void TOH(int n, char source, char target, char temp)
{
	if (n > 0)
	{
		TOH(n - 1, source, temp, target);
		printf_s("\t%c ==> %c\t\t%8d\n", source, target, n);
		TOH(n - 1, temp, target, source);
	}
}
