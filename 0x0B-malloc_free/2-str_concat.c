#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - string concatenate
 * Description: concatenates two strings into a newly created string
 * @s1: string one
 * @s2: string two
 * Return: Pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int size, srcindex, dstindex;
	char *dst;

	size = (_strlen(s1) + _strlen(s2) - 1);
	dst = malloc(size);
	if (dst == NULL)
		return (NULL);

	for (srcindex = 0, dstindex = 0; *(s1 + srcindex);
	     srcindex ++, dstindex++)
		*(dst + dstindex) = *(s1 + srcindex);

	for (srcindex = 0; *(s2 + srcindex); srcindex++, dstindex++)
		*(dst + dstindex) = *(s2 + srcindex);

	*(dst + dstindex) = '\0';
	return (dst);
}

/**
 * _strlen - string length
 * Description: Gets the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int size = 0;

	while (*(s + size))
		size++;

	return (size);
}
