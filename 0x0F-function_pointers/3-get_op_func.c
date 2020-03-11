#include "3-calc.h"

/**
 * get_op_func - get operation function
 * Description: Choose the correct operation function for calculation
 * @s: Operator in calculation
 * Return: Pointer to the correct function
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

	while (*(ops + i)->f != NULL)
	{
		if (*(ops + i)->op == *s)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
