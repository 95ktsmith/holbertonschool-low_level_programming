#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the alphabet in lower case, then upper case,
 *              followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char al[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		    'y', 'z'};
	char au[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		     'Y', 'Z'};
	int i;

	for (i = 0; i < 26; i++)
		putchar (al[i]);

	for (i = 0; i < 26; i++)
		putchar (au[i]);

	putchar ('\n');
	return (0);
}
