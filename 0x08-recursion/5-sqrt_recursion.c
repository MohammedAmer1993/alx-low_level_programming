/**
  * sqrtmine - func to help find square root
  * @guess: the guess
  * @n: the number
  * Return: the square root
  */

int sqrtmine(int guess, int n)
{
	int guessi = 0;

	guessi = (guess + n / guess) / 2;
	if (guessi * guess == n)
	{
	return (guess);
	}
	if (guessi >= guess)
	{
	return (-1);
	}
	return (sqrtmine(guessi, n));
}

/**
  * _sqrt_recursion - calculate the root
  * @n: the number
  * Return: the root
  */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n < 2)
		return (1);
	return (sqrtmine(n - 1, n));
}
