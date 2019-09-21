#include<stdio.h>
#include<stdlib.h>

int main()
{
	int select;
	do
	{
		printf_s("==========程式選單==========\n");
		printf_s("0. 離開程式\n");
		printf_s("1. 計算兩數之和\n");
		printf_s("2. 一元二次方程式的根\n");
		printf_s("3. 九九乘法表\n");
		printf_s("============================\n");
		printf_s("請選擇你要執行的程式 : ");
		scanf_s("%d", &select);
		if (select == 0)
		{
			printf_s("程式結束\n");
			break;
		}
		switch (select)
		{
		case 1:
			int x, y;
			printf_s("Please enter x : ");
			scanf_s("%d", &x);
			printf_s("Please enter y : ");
			scanf_s("%d", &y);
			printf_s("x + y = %d\n", x + y);
			break;
		case 2:
			double a, b, c, t, x1, x2;
			printf_s("請依序輸入a,b,c之值，兩數之間以空格隔開 : ");
			scanf_s("%lf %lf %lf", &a, &b, &c);
			printf_s("a=%f b=%f c=%f\n", a, b, c);
			t = b * b - 4 * a * c;
			if (t > 0)
				printf_s("兩相異實根\n");
			else if (t == 0)
				printf_s("相同實根\n");
			else
				printf_s("共軛虛根\n");
			break;
		case 3:
			int i, j;
			for (i = 1; i <= 9; i++)
			{
				for (j = 1; j <= 9; j++)
					printf_s("%d*%d=%2d", j, i, i * j);
				printf_s("\n");
			}
			break;
		default:
			printf_s("輸入錯誤，請輸入數字1~3\n");
			break;
		}
	} while (1);
	system("pause");
}
