#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches an array for a value using jump search algorithm
 * @array: Pointer to start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the first matching value index, or -1 if array is empty or
 *         is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = 0, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (step >= size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (prev <= step && prev < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
