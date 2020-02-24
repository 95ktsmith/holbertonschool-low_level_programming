#include "holberton.h"

/**
 * _memcpy - Memory Copy
 * Description: copies n bytes from memory area src to memory area dest.
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Number of bytes to copy
 * Return: Pointer to destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(dest + index) = *(src + index);
	return (dest);
}
