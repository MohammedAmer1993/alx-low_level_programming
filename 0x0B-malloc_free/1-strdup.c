#include <stdlib.h>
#include <string.h>
/**
  * _strdup- dublicate a string into heap
  * @str: the orginal string in stack
  * Return: pointer to the duplicate string in heap
  */
char *_strdup(char *str)
{
	int len;
	char *ptr;
	int i;

	len = strlen(str) + 1;
	ptr = (char *) malloc(len);
	if (!ptr)
		return (0L);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
