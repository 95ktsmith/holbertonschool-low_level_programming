#include "holberton.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to be checked
 * Description: Computes the absolute value of an integer
 * Return: Asolute value in @n
 */

void print_sum()
{
	int i, sum;

	sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%i\n", sum);
}
