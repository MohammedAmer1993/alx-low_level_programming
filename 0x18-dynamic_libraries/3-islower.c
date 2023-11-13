/**
  * _islower - funtion to get lowercase letter
  * @c: the letter to be tested
  *
  * Description: this func returns 1 if lower @c and 0 if upper @c
  * Return: 1(lower) or 0(upper)
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
