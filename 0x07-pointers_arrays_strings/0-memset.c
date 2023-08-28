/**
  * _memset - set buffer to value
  * @s: the buffer
  * @b: the value
  * @n: number of elements to be set
  * Return: pointer to frist ememnt of buffer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		++i;
	}
	return (s);
}
