double calculatePi(int term)
{
	double pi = 0;
	int i;

	for (i = 1; i <= term; i++)
	{
		if (i % 2 == 0)
			pi -= 4 / (2.0 * i - 1);
		else
			pi += 4 / (2.0 * i - 1);
	}
	return pi;
}
