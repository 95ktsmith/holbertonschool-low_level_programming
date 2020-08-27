#include "search_algos.h"

/**
 * interpolation_search - searches an array for a value using interpolation
 *                        search algorithm
 * @array: Pointer to start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the first matching value, or -1 if the array is empty or
 *         is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;
	low = 0;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos > size)
		{
			printf("Checked value at array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Checked value array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}

	return (-1);
}
