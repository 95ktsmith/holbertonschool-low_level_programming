#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the alphabet in lower case, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		    'y', 'z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar (a[i]);
	}
	putchar ('\n');
	return (0);
}
