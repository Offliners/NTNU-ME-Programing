#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, inner, outer;
	printf_s("=============列印星狀圖=============\n");
	printf_s("請輸入外圈邊長及內圈邊長 : ");
	scanf_s("%d %d", &outer, &inner);
	if (outer % 2 != inner % 2)
		printf_s("輸入錯誤\n");
	else
	{
		for (i = 1; i <= outer; i++)
		{
			for (j = 1; j <= outer; j++)
			{
				if (((i <= (outer + inner) / 2) && (i > (outer - inner) / 2)) && ((j <= (outer + inner) / 2) && (j > (outer - inner) / 2)))
					printf_s("  ");
				else
					printf_s("* ");
			}
			printf_s("\n");
		}
	}
	system("pause");
}
