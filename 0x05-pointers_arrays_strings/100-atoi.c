/**
  * _atoi - conver string into int
  * @s: string to be converted
  * Return: the intger val
  */
int _atoi(char *c)
{
	int j = 1;
	int i = 0;
	int tmp = 0;

	while (*c)
	{
		if (*c == '-')
		{
			j *= -1;
			++c;
		}
		else if (*c == '+' || *c == ' ')
		{
			++c;
			continue;
		}
		else if ((*c < 48 || *c > 57) && *c != '+' && *c != ' ')
		{
			j = 1;
			++c;
			continue;
		}
		else if (*c > 47 && *c < 58)
		{
			while (*c > 47 && *c < 58)
			{
				tmp = *c + '0';
				i = 10 * i + tmp;
				++c;
			}
			return (i * j);
		}
	}
	return (0);
}
