#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers up to 98
 * @n: Number to start counting from
 * Description: Counts to 98 starting from a specified number
 * Return: void
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			if (n < 98)
				n++;
			else
				n--;
		}
	}
	printf("98\n");
}
