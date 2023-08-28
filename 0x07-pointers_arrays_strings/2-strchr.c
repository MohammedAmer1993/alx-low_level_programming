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
	return (0L);
}
