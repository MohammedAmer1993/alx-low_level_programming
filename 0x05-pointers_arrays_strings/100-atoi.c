/**
  * _atoi - conver string into int
  * @s: string to be sonverted
  * Return: the intger val
  */
int _atoi(char *s)
{
	int j = 1;
	int i = 0;
	int tmp = 0;

	while (*s)
	{
		if (*s == '-')
		{
			j *= -1;
			++s;
		}
		else if (*s > 47 && *s < 58)
		{
			while (*s > 47 && *s < 58)
			{
				tmp = *s - '0';
				i = 10 * i + tmp;
				++s;
			}
			return (i * j);
		}
	}
	return (0);
}
