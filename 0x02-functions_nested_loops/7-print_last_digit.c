#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Description: Prints and returns the last digit of a numberr
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		d *= -1;

	_putchar (d + '0');
	return (d);
}
