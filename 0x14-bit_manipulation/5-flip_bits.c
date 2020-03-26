#include "holberton.h"

/**
 * flip_bits - flip bits
 * Description: Returns the number of bits you would need to flip to get
 *              from one number to another
 * @n: FIrst number
 * @m: Second number
 * Return: Number of bits require to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, bits = 0;
	int index;

	flip = n ^ m;
	for (index = 0; index < 64; index++)
		bits += (flip & 1 << index ? 1 : 0);
	return (bits >> 1);
}
