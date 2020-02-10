#include "holberton.h"
/**
 * main - entry point
 * Description: Prints 'Holberton' followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar (holberton[i]);
	_putchar ('\n');
	return (0);
}
