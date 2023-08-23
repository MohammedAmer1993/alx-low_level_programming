#include <string.h>
/**
  * _strcmp - compare two string
  * @s1: pointer to frist string
  * @s2: pointer to second string
  * Return: 0 if match + if s1 greater, - if s2 greater
  *
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len;
	int f = 0;

	len = strlen(s1) + 1;
	while (i < len)
	{
		f = s1[i] - s2[i];
		if (f != 0)
			return (f);
		++i;
	}
	return (f);
}
