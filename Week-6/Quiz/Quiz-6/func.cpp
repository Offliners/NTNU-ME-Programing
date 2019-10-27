int gcd(int num1, int num2)
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

int lcm(int num1, int num2)
{
	return num1 * num2 / gcd(num1, num2);
}
