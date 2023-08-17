int _putchar(char c);
/**
  * print_numbers - print from 0 to 9
  *
  * Return: nothing (void)
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		_putchar('0' + i);
	}
}
