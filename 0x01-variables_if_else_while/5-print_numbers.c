#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all single digit numbers of base 10, starting from 0.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);

	printf("\n");

	return (0);
}