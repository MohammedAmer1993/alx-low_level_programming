/**
  * _isdigit - to test a char if is digit
  * @c: the char to be tested
  * Return: 1 if digit , 0 if not
  */
int _isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
