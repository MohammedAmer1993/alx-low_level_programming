#include <stdlib.h>
/**
  * free_grid - func to free 2d array
  * @grid: pointer to 2d array;
  * @height: heigt of array
  * Return: nothing (void func)
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(*(grid + i));
	free(grid);
}
