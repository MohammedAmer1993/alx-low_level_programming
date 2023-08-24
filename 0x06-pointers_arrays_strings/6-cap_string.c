/**
  * cap_string - captlize frist letter
  * @s: pointer to string
  * Return: return char pointer
  */
char *cap_string(char *s)
{
	int i = 0;

	if (*s > 96 && *s < 123)
		*s -= 32;
	while (*(s + i))
	{
		switch (*(s + i))
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (*(s + i + 1) && *(s + i + 1) > 96 && *(s + i + 1) < 123)
					*(s + i + 1) -= 32;
				break;
		}
		++i;
	}
	return (s);
}
