#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - character allocate
 * Description: Allocates memory for an array and sets each element to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 * Return: Pointer to allocated memory, or NULL if unsuccessful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	filler = pointer;
	while (nmemb-- > 0)
		*filler++ = 0;
	return (pointer);
}
