#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf_s("i = %d\n", i);
	}
	system("pause");
}
