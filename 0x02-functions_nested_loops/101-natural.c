#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Adds together numbers divisible by 3 or 5 below 1024, and print
 * Return: Always 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%i\n", sum);
	return (0);
}
