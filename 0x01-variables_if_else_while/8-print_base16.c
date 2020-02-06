#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all numbers of base16 in lowercase, followed by new line
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	for (i = 0; i < 10; i++)
		putchar (i + '0');

	for (i = 0; i < 6; i++)
		putchar (c[i]);

	putchar ('\n');

	return (0);
}
