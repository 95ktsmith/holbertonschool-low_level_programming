#include "holberton.h"

/**
 * reverse_array - Reverse Array
 * @a: Array
 * @n: Number of elements in array
 * Description: Reverses an array of integers
 */

void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	index = 0;

	for (index = 0; index <= (n - 1) / 2 && a[index] != '\0'; index++)
	{
		tmp = a[index];
		a[index] = a[(n - 1) - index];
		a[(n - 1) - index] = tmp;
	}
}
