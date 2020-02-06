#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all single digit numbers of base 10, starting from 0.
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 9 || j != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}