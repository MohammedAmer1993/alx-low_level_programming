int _putchar(char c);
/**
  * print_numbers - print from 0 to 9
  *
  * Return: nothing (void)
  */
void print_numbers(void)
{
	int i;
	int tmp = 0;

	for (i = 0; i < 11; ++i)
	{
		if (i == 10)
			tmp = -12;
		_putchar('0' + tmp);
		++tmp;
	}
	_putchar('\n');
}
