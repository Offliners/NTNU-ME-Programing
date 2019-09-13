#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r1, i1, r2, i2;
	printf_s("請輸入第一個複數 : ");
	scanf_s("%d %d", &r1, &i1);
	printf_s("請輸入第二個複數 : ");
	scanf_s("%d %d", &r2, &i2);
	printf_s("第一個複數為 %d + %di\n", r1, i1);
	printf_s("第二個複數為 %d + %di\n", r2, i2);
	printf_s("兩複數相加 = %d + %di\n", r1 + r2, i1 + i2);
	printf_s("兩複數相減 = %d + %di\n", r1 - r2, i1 - i2);
	printf_s("兩複數相乘 = %d + %di\n", r1 * r2 - i1 * i2, r1 * i2 + i1 * r2);
	printf_s("兩複數相除 = %f + %fi\n", (float)(r1 * r2 + i1 * i2)/(r2*r2+i2*i2), (float)(i1 * r2 - r1 * i2)/(r2 * r2 + i2 * i2));
	system("pause");
}
