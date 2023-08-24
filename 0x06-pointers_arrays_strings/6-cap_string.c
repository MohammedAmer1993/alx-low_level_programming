/**
  * cap_string - captlize frist letter
  * @s: pointer to string
  * Return: return char pointer
  */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
			if (*(s + i + 1) > 96 && *(s + i + 1) < 123)
				*(s + i + 1) -= 32;
		++i;
	}
	return (s);
}
