#include "holberton.h"

/**
 * set_bit - set bit value
 * Description: Sets the value of a bit to 1 at a given index
 * @n: Pointer to a number
 * @index: Index of bit to change
 * Return: 1 if successful, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index >= 64)
		return (-1);

	if (!(*n & bit))
		*n += bit;

	return (1);
}
