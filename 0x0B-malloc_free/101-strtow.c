#include <stdlib.h>
#include <string.h>
/**
  * word_count - counts number of words
  * @str: string of words delimited by space
  * Return: number of words
  */
int word_count(char *str)
{
	int i = 0;
	int count = 0;

	if (str[i] != ' ')
		++count;
	for (i = 0; str[i]; ++i)
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			++count;
	return (count);
}
/**
  * strtow - split a string
  * @str: string to be splited
  * Return: array  of strings (double pointer)
  */
char **strtow(char *str)
{
	int z, i, tmp, count, m = 0;
	char **ptr;

	count = word_count(str);
	ptr = (char **) malloc ((count + 1) * sizeof(char *));
	if (!ptr)
		return (0L);
	for (i = 0; str[i]; ++i)
	{
		if (str[i] == ' ')
			continue;
		else
		{
			tmp = i;
			for (z = 0; str[tmp] != ' ' && str[tmp]; ++z)
				++tmp;
			ptr[m] = (char *) malloc((z + 1) * sizeof(char));
			if (!ptr[m])
			{
				while (m != 0)
				{
					free(ptr[m]);
					--m;
				}
				free(ptr);
				return (0L);
			}

			for (z = 0; str[i]; ++z)
			{
				ptr[m][z] = str[i];
				++i;
				if (str[i] == ' ' || !str[i])
				{
					++z;
					break;
				}
			}
			ptr[m][z] = '\0';
			++m;
		}
	}
	ptr[m] = 0L;
	return (ptr);
}
