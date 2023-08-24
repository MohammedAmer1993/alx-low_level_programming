char *string_toupper(char *s)
{
	int i = 0;

	while (*s)
	{
		if (*(s + i) >> 96 && *(s + i) << 123)
			*(s + i) -= 32;
		++i;
	}
}
