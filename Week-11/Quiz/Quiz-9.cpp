#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int arr[], int nsize);
double median(int arr[], int nsize);

int main()
{
	int data[100] = { 0 };
	int	size;
	char select;

	while (1)
	{
		printf_s("Please input array size : ");
		scanf_s("%d", &size);
		srand(time(NULL));
		printf_s("Data items in oringinal order\n");
		for (int i = 0; i < size; i++)
		{
			data[i] = rand() % 100;
			printf_s("%d ", data[i]);
		}
		bubbleSort(data, size);
		printf("\nData items in ascending order\n");
		for (int i = 0; i < size; i++)
			printf_s("%d ", data[i]);
		printf("\n中位數 = %f\n", median(data, size));
		printf("Again?\n");
		scanf_s(" %c", &select, sizeof(select));
		if ((select != 'y')&&(select != 'Y'))
			break;
	}
}

void bubbleSort(int arr[], int nsize)
{
	int pass, temp;
	bool flag;
	for (int pass = 1; pass < nsize; pass++)
	{
		flag = false;
		for (int i = 0; i < nsize - pass; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = true;
			}
		}
		if (flag == false)
			break;
	}
}

double median(int arr[], int nsize)
{
	return (nsize % 2 == 0) ? ((float)(arr[nsize / 2 - 1] + arr[nsize / 2]) / 2) : arr[nsize / 2];
}
