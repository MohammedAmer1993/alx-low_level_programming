/**
  * _pow_recursion - calculate the power of num
  * @x: the base
  * @y: the power
  * Return the power (int)
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
