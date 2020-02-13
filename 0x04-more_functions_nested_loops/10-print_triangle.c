#include "holberton.h"

/**
 * print_triangle - Print a triangle
 * @size: height of the triangle
 * Description: Prints a triangle of specified height
 */

void print_triangle(int size)
{
	int row, spaces, hash;

	for (row = 0; row < size; row++)
	{
		for (spaces = 0; spaces < size - row; spaces++)
			_putchar (' ');
		for (hash = 0; hash < size - (size - row) + 1; hash++)
			_putchar ('#');

		if (row != size - 1)
			_putchar ('\n');
	}
	_putchar ('\n');
}
