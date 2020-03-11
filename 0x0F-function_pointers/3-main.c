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

	if (argc != 4 || !**argv)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(*(argv + 2)) != 1)
	{
		printf("Error\n");
		exit(98);
	}

	s = *(argv + 2);
	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));
	if ((*s == '/' || *s == '%') || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(s)(a, b));
	return (0);
}
