int gcd(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;
	else
		return gcd(num2, num1 % num2);
}

int factorial(int num)
{
	if ((num == 1) || (num == 0))
		return 1;
	else
		return factorial(num - 1) * num;
}

int fibonacci(int n)
{
	return (n == 0) || (n == 1) ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}
