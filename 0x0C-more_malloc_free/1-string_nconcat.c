#include <string.h>
#include <stdlib.h>
/**
  * string_nconcat - concat n bytes of s2 with s1
  * @s1: frist string
  * @s2: second string
  * @n: number of bytes
  * Return: pointer to sum of strings
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, m;
	char *ptr;

	if (s1)
		l1 = strlen(s1);
	else
		l1 = 0;
	if (s2)
		l2 = strlen(s2);
	else
		l2 = 0;
	if (n > l2)
		n = l2;
	ptr = malloc(l1 + n + 1);
	if (!ptr)
		return (0L);
	for (i = 0; i < l1; ++i)
		ptr[i] = s1[i];
	m = i;
	for (i = 0; i < n; ++i)
	{
		ptr[m] = s2[i];
		++m;
	}
	ptr[m] = '\0';
	return (ptr);
}
