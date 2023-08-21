/**
  * _strlen - funct to find the length of str
  * @s: pointer to frist letter of the str
  * Return: number of letters (int)
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		++i;
		++s;
	}
	return (i + 1);
}
