/**
  * rev_string - func to reverse a string
  * @s: pointer to string
  * Return: Nothing (void func)
  */
void rev_string(char *s)
{
	char tmpchar = 0;
	char *tmp = s;

	while (*tmp)
	{
		++tmp;
	}
	--tmp;
	while (tmp > s)
	{
		tmpchar = *s;
		*s = *tmp;
		*tmp = tmpchar;
		++s;
		--tmp;
	}
}
