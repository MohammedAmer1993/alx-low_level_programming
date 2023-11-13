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
	int z;

	while (dest[i])
	{
		++i;
	}
	for (z = 0; z < n; ++z)
	{
		if (*(src + z) == '\0')
			break;
		dest[i] = *(src + z);
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
