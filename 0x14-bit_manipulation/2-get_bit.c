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
	if (index >= 64)
		return (-1);

	return ((n & 1 << index ? 1 : 0));
}
