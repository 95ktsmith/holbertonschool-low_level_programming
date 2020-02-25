#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sums
 * Description: Prints the diagonal sums of a 2d array
 * @a: The array
 * @size: Size of the array
 */

void print_diagsums(int *a, int size)
{
	long sum;
	int index;

	for (index = 0, sum = 0; index < size; index++)
		sum += *(a + index + (index * size));

	printf("%li, ", sum);

	for (index = size - 1, sum = 0; index >= 0; index--)
	{
		sum += *(a + (size - 1) + (index * (size - 1)));
	}
	printf("%li\n", sum);
}
