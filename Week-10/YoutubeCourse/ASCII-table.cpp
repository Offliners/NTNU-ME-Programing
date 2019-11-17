#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	
	printf_s("====================ASCII Table====================\n");
	for (i = 0; i < 128; i++)
	{
		if (i == 13)
			continue;
		printf_s("%3d %c\t", i, i);
		if (i % 8 == 7)
			printf_s("\n");
	}
	printf_s("\n");
	system("pause");
}
