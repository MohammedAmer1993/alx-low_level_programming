int _putchar(char c);
/**
  * print_number - print a number using _putchar
  * @n: number to be printed
  * Return: nothing (void)
  */
void print_number(int n)
{
	int val;
	int dv = 1000000000;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n / dv == 0)
		dv = dv / 10;
	while (dv >= 10)
	{
		val = n / dv;
		if (val == 0)
		{
			_putchar('0' + val);
			dv = dv / 10;
		}
		else
		{
			n = n - (val * dv);
			dv = dv / 10;
			_putchar('0' + val);
		}
	}
	_putchar('0' + n);
}
