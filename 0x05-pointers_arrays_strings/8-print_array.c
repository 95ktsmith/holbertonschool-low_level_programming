#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array
 * @a: Array
 * @n: Number of elements to print
 * Description: Prints a specified number of elements of an array
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%i", *(a + index));
		if (index != n - 1)
			printf(", ");
	}
	printf("\n");
}
