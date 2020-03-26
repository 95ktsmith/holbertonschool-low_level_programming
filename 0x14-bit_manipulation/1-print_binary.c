#include "holberton.h"

/**
 * print_binary - print binary
 * Description: Prints the binary representation of a number
 * @n: Number
 */

void print_binary(unsigned long int n)
{
	unsigned int bits = 1;
	unsigned long int place = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n >= place)
	{
		place <<= 1;
		bits++;
	}

	place >>= 1;
	while (--bits)
	{
		_putchar((n & place ? '1' : '0'));
		place >>= 1;
	}
}
