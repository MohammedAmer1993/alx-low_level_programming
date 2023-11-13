/**
  * _strcpy - copyt a string into buffer
  * @dest: destination buffer
  * @src: source buffer
  * Return: pointer to buffer
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
