#include<stdio.h>
#include<stdlib.h>

int main()
{
	double height, weight, BMI;
	printf_s("請輸入身高 (cm) : ");
	scanf_s("%lf", &height);
	printf_s("請輸入體重 (Kg) : ");
	scanf_s("%lf", &weight);
	BMI = 10000 * weight / (height * height);
	printf_s("BMI=%f\n", BMI);
	if (BMI < 18.5)
		printf_s("體重過輕\n");
	else if(BMI >= 24)
		printf_s("體重過重\n");
	else
		printf_s("體重適中\n");
	system("pause");
}
