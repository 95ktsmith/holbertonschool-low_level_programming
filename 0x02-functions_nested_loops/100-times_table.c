#include "holberton.h"

/**
 * print_times_table - prints times table
 * Description: Prints the n times table, starting with 0, with results
 *              results separated by a comma and space.
 * @n: Number to base the times table on
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, result;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				result = row * column;
				if (result > 99)
				{
					_putchar (result / 100 + '0');
					_putchar ((result / 10) % 10 + '0');
					_putchar (result % 10 + '0');
				}
				else if (result > 9)
				{
					_putchar (' ');
					_putchar ((result / 10) % 10 + '0');
					_putchar (result % 10 + '0');
				}
				else
				{
					if (column != 0)
					{
						_putchar (' ');
						_putchar (' ');
					}

					_putchar (result + '0');
				}

				if (column != n)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			_putchar('\n');
		}
	}
}
