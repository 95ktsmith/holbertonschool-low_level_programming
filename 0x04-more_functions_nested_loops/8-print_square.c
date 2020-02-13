#include "holberton.h"

/**
 * print_square - Print a square
 * @size: width and height of the sqaure
 * Description: Prints a square of specified width and height
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
			_putchar ('#');

		if (row != size - 1)
			_putchar ('\n');
	}
	_putchar ('\n');
}
