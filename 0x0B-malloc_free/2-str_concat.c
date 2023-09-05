#include <string.h>
#include <stdlib.h>
/**
  * str_concat - funct to concatenates two strings
  * @s1: frist string
  * @s2: second string
  * Return: pointer to sum of two strings
  */
char *str_concat(char *s1, char *s2)
{
	int len;
	int i = 0;
	int z = 0;
	char *ptr;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (!s1)
		len1 = 0;
	if (!s2)
		len2 = 0;
	len = len1 + len2 + 1;
	ptr = (char *) malloc(len);
	if (!ptr)
		return (0L);
	if (s1)
		while (s1[i])
		{
			ptr[i] = s1[i];
			++i;
		}
	if (s2)
		while (s2[z])
		{
			ptr[i] = s2[z];
			++i;
			++z;
		}
	ptr[i] = '\0';
	return (ptr);
}
