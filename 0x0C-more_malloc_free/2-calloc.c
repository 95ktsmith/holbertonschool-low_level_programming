#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - character allocate
 * Description: Allocates memory for an array and sets each element to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 * Return: Pointer to allocated memory, or NULL if unsuccessful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	while (nmemb-- > 0)
		*(pointer + nmemb) = 0;

	return ((void *)pointer);
}
