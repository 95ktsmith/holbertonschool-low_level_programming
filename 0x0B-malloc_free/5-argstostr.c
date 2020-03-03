#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * argstostr - args to string
 * Description: Concatenates all passed arguments into one string
 * @ac: number of arguments
 * @av: string of arguments pointers
 * Return: Pointer to start of concatenated string
 */

char *argstostr(int ac, char **av)
{
	int size, aindex, sindex, dstindex;
	char *dst;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (size = 0, aindex = 0; aindex < ac; aindex++)
		size += _strlen(*(av + aindex));

	dst = malloc(size + ac + 1);
	if (dst == NULL)
		return (NULL);

	for (aindex = 0, dstindex = 0; aindex < ac; aindex++)
	{
		for (sindex = 0; av[aindex][sindex] != '\0'; sindex++)
		{
			dst[dstindex] = av[aindex][sindex];
			dstindex++;
		}
		dst[dstindex] = '\n';
		dstindex++;
	}
	dst[dstindex] = '\0';
	return (dst);
}

/**
 * _strlen - string length
 * Description: Gets the length of a sring
 * @s: string
 * Return: length excluding null byte
 */

int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);

	while (*(s + size))
		size++;

	return (size);
}
