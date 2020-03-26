#include "holberton.h"

/**
 * clear_bit - clear bit value
 * Description: Sets the value of a bit to 0 at a given index
 * @n: Pointer to a number
 * @index: Index of bit to change
 * Return: 1 if successful, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index >= 64)
		return (-1);

	if ((*n & bit))
		*n -= bit;

	return (1);
}
