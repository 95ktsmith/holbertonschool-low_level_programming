#include "holberton.h"

/**
 * reverse_array - Reverse Array
 * @a: Array
 * @n: Number of elements in array
 * Description: Reverses an array of integers
 */

void reverse_array(int *a, int n)
{
	int index, tmp, end;

	index = 0;
	end = n - 1;

	for (index = 0; index < n / 2; index++)
	{
		tmp = *(a + index);
		*(a + index) = *(a + (end - index));
		*(a + (end - index)) = tmp;
	}
}
