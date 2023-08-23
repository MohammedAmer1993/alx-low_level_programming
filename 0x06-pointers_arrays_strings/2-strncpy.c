/**
  * _strncpy - copy a string to n char
  * @dest: pointer to frist buffer
  * @src: pointer to the srouce bffuer
  * @n: number of char to be copied
  * Return: pointer to the dest buffer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = 0;
				++i;
			}
		}
	}
	return (dest);
}
