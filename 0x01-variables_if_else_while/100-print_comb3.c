#include <stdio.h>

/**
 * main - entry point
 * Description: Prints every different combination of two digits
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
			if (i != j)
			{
				putchar (i + '0');
				putchar (j + '0');
				if (i != 8)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
		k++;
	}
	putchar ('\n');
	return (0);
}
