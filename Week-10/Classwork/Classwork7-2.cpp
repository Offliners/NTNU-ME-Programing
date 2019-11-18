#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int arrayInput(double arr[]);
double arrayVar(double arr[], int size, double avg);
double arrayKurt(double arr[], int size, double avg, double var);
double arrayAvg(double arr[], int size);

int main()
{
	int count;
	double data[10];
	char select;
	double avg, var, kurt;

	while (1)
	{
		printf_s("========== Output ==========\n");
		printf_s("Please input floating number <No. 10, Terminated by Ctrl Z> :\n");
		count = arrayInput(data);
		avg = arrayAvg(data, count);
		var = arrayVar(data, count, avg);
		kurt = arrayKurt(data, count, avg, var);
		printf_s("Mean = %f\n", avg);
		printf_s("Var = %f\n", var);
		printf_s("Std = %f\n", sqrt(var));
		printf_s("Kurt = %f\n", kurt);
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

double arrayAvg(double arr[], int size)
{
	double avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	return avg / size;
}

double arrayVar(double arr[], int size, double avg)
{
	double var = 0;
	for (int i = 0; i < size; i++)
		var += pow((arr[i] - avg), 2);
	return var / size;
}

double arrayKurt(double arr[], int size, double avg, double var)
{
	double kurt = 0;
	for (int i = 0; i < size; i++)
		kurt += pow((arr[i] - avg), 4);
	return kurt / size / (var * var) - 3;
}
