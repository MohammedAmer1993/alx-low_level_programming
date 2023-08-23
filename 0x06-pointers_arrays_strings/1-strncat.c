/**
  * _strncat - concatenate two str
  * @dest: the buffer that recieves the output
  * @src: the buffer to read from
  * @n: number of char to be appended
  * Return: pointer to char (dest)
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int z = 0;

	while (dest[i])
		++i;
	for (z = 0; z < n; ++z)
	{
		dest[i] = *src;
		++src;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
