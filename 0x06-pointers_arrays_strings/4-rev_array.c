/**
  * reverse_array - reverse the elemnt of array
  * @a: pointer to frist elemnt of array
  * @n: number of array element
  * Return: nothing (void)
  */
void reverse_array(int *a, int n)
{
	int tmp = 0;
	int i = 0;
	int z = n - 1;

	while (i < z)
	{
		tmp = a[i];
		a[i] = a[z];
		a[z] = tmp;
		++i;
		--z;
	}
}
