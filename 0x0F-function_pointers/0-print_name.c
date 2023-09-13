#include "function_pointer.h"
/**
  * print_name - prints a name in two modes normal and upper
  * @name: the name to be printed
  * @f: function pointer to the mode
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f();
}
