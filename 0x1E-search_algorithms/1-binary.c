#include "search_algos.h"

/**
 * binary_rec - searches an array for a value using binary search algorithm
 * @array: Pointer to the start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Pointer to first matching instance of @value, of NULL if the array
 *         is empty or is NULL.
 */
int *binary_rec(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (NULL);

	printf("Searching in array: ");
	for (index = 0; index < size; index++)
	{
		if (index == (size - 1))
			printf("%d\n", array[index]);
		else
			printf("%d, ", array[index]);
	}

	index = (size - 1) / 2;

	if (array[index] == value)
		return (array + index);
	else if (array[index] > value && index != 0)
		return (binary_rec(array, index, value));
	else if (array[index] < value && (index + 1) < size)
		return (binary_rec(array + index + 1, size - index - 1, value));
	return (NULL);
}

/**
 * binary_search - wrapper function for binary_rec search function
 * @array: Pointer to start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the first matching instance of @value, or -1 if the array
 *         is empty or is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int *match = binary_rec(array, size, value);

	if (match == NULL)
		return (-1);

	return ((int)(match - array));
}
