#include <stdlib.h>
/**
  * alloc_grid - func to build a grid
  * @width: width of the grid
  * @height: height of the grid
  * Return: pointer to pointer to the grid
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int z;

	if (width <= 0)
		return (0L);
	if (height <= 0)
		return (0L);
	ptr = (int **) malloc(height * sizeof(int *));
	if (!ptr)
		return (0L);
	for (i = 0; i < height; ++i)
	{
		*(ptr + i) = (int *) malloc(width * sizeof(int));
		if (!(*(ptr + i)))
		{
			while (i != -1)
			{
				free(*(ptr + i - 1));
				--i;
			}
			return (0L);
		}
	}
	for (i = 0; i < height; ++i)
	{
		for (z = 0; z < width; ++z)
		{
			ptr[i][z] = 0;
		}
	}
	return (ptr);
}
