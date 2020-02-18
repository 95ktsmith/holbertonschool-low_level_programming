#include "holberton.h"

/**
 * swap_int - Swaps two numbers
 * @a: First number
 * @b: Second number
 * Description: Swaps the value of two integers
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
