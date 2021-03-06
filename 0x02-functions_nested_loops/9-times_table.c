#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Description: Prints the 9 times table, starting with 0, with results
 *              results separated by a comma and space.
 * Return: void
 */

void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;

			if (result > 9)
			{
				_putchar (result / 10 + '0');
				_putchar (result % 10 + '0');
			}
			else
			{
				if (column != 0)
					_putchar (' ');

				_putchar (result + '0');
			}

			if (column != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
