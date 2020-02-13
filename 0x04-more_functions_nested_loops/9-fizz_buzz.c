#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Prints numbers 1 to 100, replacing numbers divisible by 3 with
 *              'Fizz', numbers divisible by 5 with 'Buzz', and numbers
 *              divisible by both with 'FizzBuzz'.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
