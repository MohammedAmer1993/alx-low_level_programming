#include "function_pointers.h"
#include "3-calc.h"
/**
  * get_op_func - func to choose the operation
  * @s: the operator
  * Return: function pointer to the operator
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op))
	{
		if (s[0] == *(ops[i].op))
			return (ops[i].f);
		++i;
	}
	return (0L);
}
