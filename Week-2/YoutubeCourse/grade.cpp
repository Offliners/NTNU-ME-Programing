#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x1, x2, x3;
	printf_s("請依序輸入三次考試的成績，兩個成績之間以空格隔開 : ");
	scanf_s("%d %d %d", &x1, &x2, &x3);
	printf_s("x1=%d x2=%d x3=%d\n", x1, x2, x3);
	if (x1 >= 60)
	{
		if (x2 >= 60)
		{
			if (x3 >= 60)
				printf_s("及格\n");
			else
				printf_s("不及格\n");
		}
		else
			printf_s("不及格\n");
	}
	else
		printf_s("不及格\n");
	system("pause");
}
