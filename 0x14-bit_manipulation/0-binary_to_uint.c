#include "holberton.h"

/**
 * binary_to_uint - binary to unsigned int
 * Description: Converts a string of binary characters to an unsigned int
 * @b: String of binary characters
 * Return: Converted unsigned int, or 0 if the string contains characters that
 *         aren't either a 1 or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, converted_number = 0, place = 1;

	if (!b)
		return (0);
	while (*(b + index))
		index++;
	while (index--)
	{
		if (*(b + index) == '1')
			converted_number += place;
		else if (*(b + index) != '0')
			return (0);
		place <<= 1;
	}
	return (converted_number);
}
