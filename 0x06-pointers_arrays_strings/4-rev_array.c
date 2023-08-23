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
		tmp = arr[i];
		arr[i] = arr[z];
		arr[z] = tmp;
		++i;
		--z;
	}
}
