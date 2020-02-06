#include <stdio.h>

/**
 * main - entry point
 * Description: Prints every combination of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = k; j < 10; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 9 || j != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
		k++;
	}
	return (0);
}
