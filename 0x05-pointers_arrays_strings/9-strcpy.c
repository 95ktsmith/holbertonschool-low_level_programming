#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copy a string
 * @dest: Destination string
 * @src: Stringt to copy from
 * Description: Copies the contents of one string into another
 * Return: Pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (*(src + index) != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}
