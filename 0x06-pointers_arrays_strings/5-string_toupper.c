/**
  * strint_toupper - captalize all letters
  * @s: pointer to string 
  * Return: pointer to string;
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) > 96 && *(s + i) < 123)
		{
			*(s + i) -= 32;
		}
		++i;
	}
	return (s);
}
