#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description: Calculates two integers with given operator and prints result
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: 0 on success, or -1 on failure
 */

int main(int argc, char **argv)
{
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}

	if (strlen(*(argv + 2)) != 1)
	{
		printf("Error\n");
		return (-1);
	}

	if (get_op_func(*(argv + 2)) == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	s = *(argv + 2);
	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));

	printf("%i\n", get_op_func(s)(a, b));
	return (0);
}
