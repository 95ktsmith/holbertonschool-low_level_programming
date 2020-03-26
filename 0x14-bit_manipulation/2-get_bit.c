#include "holberton.h"

/**
 * get_bit - get value of a bit
 * Description: Gets the value of a bit at a given index
 * @n: Number
 * @index: Index of bit to get
 * Return: Value of the bit, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	while (index--)
	{
		if (n <= bit)
			return (-1);
		bit <<= 1;
	}

	return ((n & bit ? 1 : 0));
}
