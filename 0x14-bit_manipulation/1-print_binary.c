#include "holberton.h"

/**
 * print_binary - print binary
 * Description: Prints the binary representation of a number
 * @n: Number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits = 1;
	unsigned long int bit = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n >= bit << bits && bits <= 64)
		bits++;

	while (bits--)
		_putchar((n & bit << bits ? '1' : '0'));
}
