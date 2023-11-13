/**
  * _isalpha - funtion to get a letter
  * @c: the letter to be tested
  *
  * Description: this func returns 1 if alpha @c and 0 if not @c
  * Return: 1(letter) or 0(not)
  */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
