#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * Description: Applies a specified function to each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: Function to execute on the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (!*action)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
