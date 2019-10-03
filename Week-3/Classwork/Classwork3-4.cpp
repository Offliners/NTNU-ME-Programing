#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, rem, rev = 0;
	printf_s("輸入 : ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		rem = num % 10;
		num /= 10;
		rev = rev * 10 + rem;
	}
	printf_s("輸出 : %d\n", rev);
	system("pause");
}
