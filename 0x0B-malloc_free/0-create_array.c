#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array
 * Description: Creates an array of chars and initializes with a specific char
 * @size: Size of the array
 * @c: Character to initialize with
 * Return: Pointer to start of the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(size);
	for (index = 0; index < size; index++)
		*(array + index) = c;
	return (array);
}
