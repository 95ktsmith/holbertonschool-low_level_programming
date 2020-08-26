#include "search_algos.h"

/**
 * linear_search - searches an array for a value using linear search algorithm
 * @array: Pointer to start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index where matching value is first found, or -1 if value is not
 *	present or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < size)
	{
		printf("Value checked array [%u] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}
