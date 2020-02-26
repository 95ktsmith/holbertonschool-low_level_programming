#include "holberton.h"

/**
 * _pow_recursion - power by recursion
 * Description: Returns the value of one number raised to another
 * @x: Base number
 * @y: Exponent
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
