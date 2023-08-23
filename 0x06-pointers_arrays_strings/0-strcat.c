/**
  * _strcat - concatenate two str
  * @dest: the buffer that recieves the output
  * @src: the buffer to read from
  * Return: pointer to char (dest)
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
		++i;
	while (*src)
	{
		dest[i] = *src;
		++src;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
