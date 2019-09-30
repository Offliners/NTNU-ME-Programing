int GCD(int num1, int num2)
{
	int temp;
	while (num1 % num2 != 0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	return num2;
}

int GCD(int num1, int num2, int num3)
{
	return GCD(GCD(num1, num2), num3);
}
