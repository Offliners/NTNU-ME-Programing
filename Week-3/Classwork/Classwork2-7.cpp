#include<stdio.h>
#include<stdlib.h>

int main()
{
	int term, i = 1, an = 1,sum = 1;
	printf_s("Terms : ");
	scanf_s("%d", &term);
	while(i < term)
	{
		an = 2 * an + 1;
		sum += an;
		i++;
	}
	printf_s("an=%d\n", an);
	printf_s("Sn=%d\n", sum);
	system("pause");
}
