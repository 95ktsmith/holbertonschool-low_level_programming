#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - array range
 * Description: Allocates an array and fills it with a range of integers
 * @min: Minimum number in range
 * @max: Maximum number in range
 * Return: Pointer to array, or NULL if unsuccessful.
 */

int *array_range(int min, int max)
{
	int index;
	int *array;

	if (min > max)
		return (NULL);
	if (max - min < 2)
		index = 2;
	else
		index = max - min + 1;

	array = malloc(index * 4);
	if (array == NULL)
		return (NULL);

	for (index = 0; index + min <= max; index++)
		array[index] = index + min;
	if (min == max)
		array[index] = max;
	return (array);
}
