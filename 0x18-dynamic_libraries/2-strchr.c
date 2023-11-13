/**
  * _strchr - find a char
  * @s: the search buffer
  * @b: the char to find
  * Return: pointer to char if found | NULL;
  */
char *_strchr(char *s, char b)
{
	char *f = s;

	while (*s)
	{
		if ((*f) == b)
		{
			return (f);
		}
		++f;
		++s;
	}
	if (b == 0)
	{
		return (f);
	}
	return (0L);
}
