/**
  * _strstr - func to get substring
  * @haystack: the string
  * @needle: the substring
  * Return: address of substring or 0 in not found a match
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int z = 0;

	while (haystack[i])
	{
		int j = 0;

		z = i;
		while (needle[j])
		{
			if (needle[j] != haystack[z])
				break;
			++j;
			++z;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		++i;
	}
	return (0);
}
