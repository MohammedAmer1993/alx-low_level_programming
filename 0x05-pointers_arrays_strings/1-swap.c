/**
  * swap_int - func to swap two val
  * @a: frist val
  * @b: second val
  * Return: nothing void func
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
