#include "function_pointers.h"

/**
 * int_index - search for integer
 * Description: Searches for an integer with a specified comparitor, and
 *              returns the first matching index.
 * @array: Array to search through
 * @size: Number of elements in the array
 * @cmp: Pointer to function to use to compare elements
 * Return: Index of first matching element, or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
