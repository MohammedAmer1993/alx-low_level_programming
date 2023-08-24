/**
  * rot13 - funct to ratate strings
  * @s: the string
  * Return: pointer to char (same string in input)
  */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] -= 65;
			s[i] = (s[i] + 13) % 26;
			s[i] += 65;
		}
		while (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 97;
			s[i] = (s[i] + 13) % 26;
			s[i] += 97;
			break;
		}
		++i;
	}
	return (s);
}
