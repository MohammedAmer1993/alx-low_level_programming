/**
  * _strpbrk - func to gets length of prefix
  * @s: the string
  * @accept: the set of char
  * Return: addres of the frist match
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i])
	{
		unsigned int j = 0;

		while (accept[j])
		{
			if (accept[j] == s[i])
				return (&s[i]);
			++j;
		}
		++i;
	}
	return (0);
}
