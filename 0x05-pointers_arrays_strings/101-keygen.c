#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Return: int password
  */
int main(void)
{
	srand(time(NULL));
	return (rand());
}
