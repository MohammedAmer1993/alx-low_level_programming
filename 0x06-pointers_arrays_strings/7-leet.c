/**
  * leet - encrypt func
  * @s: string to be encrypted
  * Return: pointer to char
  */
char *leet(char *s)
{
	char index1[5] = {'a', 'e', 'o', 't', 'l'};
	char index2[5] = {'A', 'E', 'O', 'T', 'L'};
	char result[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int z;

	while (*(s + i))
	{
		for (z = 0; z < 5; ++z)
		{
			if (*(s + i) == index1[z] || *(s + i) == index2[z])
				*(s + i) = result[z];
		}
		++i;
	}
	return (s);
}
