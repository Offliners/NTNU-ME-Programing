#include<stdio.h>
#include<stdlib.h>

int main()
{
	char membership;
	double discount, total;
	printf_s("請輸入會員等級 : ");
	scanf_s("%c", &membership, sizeof(membership));
	printf_s("請輸入消費金額 : ");
	scanf_s("%lf", &total);
	switch (membership)
	{
		case 'a':
		case 'A':
			discount = 0.8;
			break;
		case 'b':
		case 'B':
			discount = 0.9;
			break;
		default:
			discount = 1;
			break;
	}
	total *= discount;
	printf_s("折扣後的消費金額 = %f\n", total);
	system("pause");
}
