#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to be checked
 * Description: Computes the absolute value of an integer
 * Return: Asolute value in @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
