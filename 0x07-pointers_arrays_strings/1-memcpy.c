/**
  * _memcpy - copies a buffer to n bytes
  * @dest: the destination buffer
  * @src: the sourece buffer
  * @n: number of bytes
  * Return: pointer to frist element of dest buffer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}
