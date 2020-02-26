#include "holberton.h"

/**
 * _sqrt_recursion - Square root recursion
 * Description: Finds the natural sqare root of an integer
 * @n: The integer
 * Return: The square root, or -1 if non-existent.
 */

int _sqrt_recursion(int n)
{
	int small, large;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);

		small = (_sqrt_recursion(n / 4)) * 2;
		large = small + 1;

		if (n % 2 != 0 && n % 5 != 0 && large % 2 != 0)
			return (-1);
		if (large * large > n)
			return (small);
		else
			return (large);
}
