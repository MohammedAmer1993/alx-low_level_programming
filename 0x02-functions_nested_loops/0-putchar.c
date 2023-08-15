#include "_putchar.h"

/**
  * main - Entry point
  *
  * Return: 0 (alawys success)
  */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i])
	{
		_putchar(a[i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
