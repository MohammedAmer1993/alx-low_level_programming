/**
  * _strlen_recursion - count the length of string
  * @s: the string
  * Return: int number of letters
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
