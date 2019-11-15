#include<stdio.h>
#include<stdlib.h>

int arrayInput(double arr[]);
void arrayPrint(double arr[], int size);
double arrayMax(double arr[], int size);
double arrayMin(double arr[], int size);
double arrayAvg(double arr[], int size);

int main()
{
	int count;
	double data[10];
	char select;

	while (1)
	{
		printf_s("========== Output ==========\n");
		printf_s("Please input floating number <No. 10, Terminated by Ctrl Z> :\n");
		count = arrayInput(data);
		arrayPrint(data, count);
		printf_s("Max = %.2f\n", arrayMax(data, count));
		printf_s("Min = %.2f\n", arrayMin(data, count));
		printf_s("Mean = %.2f\n", arrayAvg(data, count));
		printf_s("Do it again ?\n");
		scanf_s(" %c", &select, sizeof(select));
		if (select != 'y' && select != 'Y')
			break;
	}
	system("pause");
}

int arrayInput(double arr[])
{
	int i;
	for (i = 0; i < 10; i++)
		if (scanf_s("%lf", &arr[i]) == EOF)
			break;
	return i;
}

void arrayPrint(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf_s("  %.2f", arr[i]);
	printf_s("\n");
}

double arrayMax(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

double arrayMin(double arr[], int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

double arrayAvg(double arr[], int size)
{
	double avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	return avg / size;
}
