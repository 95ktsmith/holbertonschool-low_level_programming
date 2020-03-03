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
	int s1_size, s2_size, srcindex, dstindex;
	char *dst;


	s1_size = _strlen(s1);
	s2_size = _strlen(s2);
	dst = malloc(s1_size + s2_size + 1);

	if (dst == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (srcindex = 0, dstindex = 0; *(s1 + srcindex);
		     srcindex ++, dstindex++)
			*(dst + dstindex) = *(s1 + srcindex);
	}
	if (s2 != NULL)
	{
		for (srcindex = 0; *(s2 + srcindex); srcindex++, dstindex++)
			*(dst + dstindex) = *(s2 + srcindex);
	}
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

	if (s == NULL)
		return (0);

	while (*(s + size))
		size++;

	return (size);
}
