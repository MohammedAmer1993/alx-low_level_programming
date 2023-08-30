
/**
  * _sqrt_recursion - calculate the root
  * @n: the number
  * Return: the root
  */
int sqrtmine(int guess, int n)
{
	int guessi = 0;
	guessi = (guess + n/guess) / 2;
	if (guessi * guess == n)
	{
		return (guess);
	}
	if (guessi - guess < 1)
	{
		return (-1);
	}
	return sqrtmine(guessi, n);
}
int _sqrt_recursion(int n)
{
	if (n < 2)
		return (1);
	return (sqrtmine(2, n));
}
