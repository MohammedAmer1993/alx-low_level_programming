#include <stdlib.h>
#include <string.h>
/**
  * argstostr - function that concatenates all the arguments of prog
  * @ac: number of arg
  * @av: pointer to string (argu)
  * Return: string of sum of argu
  */
char *argstostr(int ac, char **av)
{
	int i;
	int z;
	int m = 0;
	int l = 0;
	char *ptr;

	if (!av || !ac)
		return (0L);
	for (i = 0; i < ac; ++i)
		l += strlen(av[i]);
	ptr = (char *) malloc(l + ac);
	if (!ptr)
		return (0L);
	for (i = 0; i < ac; ++i)
	{
		for (z = 0; av[i][z]; ++z)
		{
			ptr[m] = av[i][z];
			++m;
		}
		ptr[m] = '\n';
		++m
	}
	ptr[m] = '\0';
	return (ptr);
}
