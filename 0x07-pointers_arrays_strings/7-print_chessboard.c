#include "main.h"
/**
  * print_chessboard - print board
  * @a: pointer to array of 8 elements
  * Return: nothing void func
  */

void print_chessboard(char (*a)[8])
{
	int j = 0;

	while (j < 8)
	{
		int i = 0;

		while (i < 8)
		{
			_putchar(a[j][i]);
			++i;
		}
		_putchar('\n');
		++j;
	}
}
