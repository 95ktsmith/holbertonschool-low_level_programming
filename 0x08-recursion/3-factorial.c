#include "holberton.h"

/**
 * factorial - factorial
 * Description: Returns the factorial of a given number
 * @n: The number
 * Return: Factorial of n, or -1 if there is an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
