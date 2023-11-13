/**
  * _strspn - func to gets length of prefix
  * @s: the string
  * @accept: the prefix
  * Return: number of bytes int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i])
	{
		unsigned int j = 0;

		while (accept[j])
		{
			if (accept[j] == s[i])
				break;
			++j;
		}
		if (accept[j] == '\0')
			return (i);
		++i;
	}
	return (0);
}
