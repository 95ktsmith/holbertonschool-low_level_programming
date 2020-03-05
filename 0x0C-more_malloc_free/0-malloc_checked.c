#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc checked
 * Description: Allocates memory using malloc and checks for success
 * @b: Number of bytes to allocate
 * Return: pointer to allocated memory, or 98 if allocation fails.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
