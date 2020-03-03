#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - string duplicate
 * Description: Duplicates a string
 * @str: Source string
 * Return: Pointer to newly created string
 */

char *_strdup(char *str)
{
	int index, size;
	char *dst;

	while (*(str + size))
		size++;

	dst = malloc(size);

	for (index = 0; index < size; index++)
		*(dst + index) = *(str + index);

	*(dst + index) = '\0';

	return (dst);
}
