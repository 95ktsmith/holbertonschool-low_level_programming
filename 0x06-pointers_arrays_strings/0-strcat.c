#include "holberton.h"

/**
 * _strcat - Concatonates two strings
 * Description: Adds one string to the end of another string.
 * @dest: Destination string
 * @src: Source string
 * Return: Desination string pointer.
 */

char *_strcat(char *dest, char *src)
{
	char *destcpy;
	int index;

	index = 0;
	destcpy = dest;
	while (*(destcpy) != '\0')
		destcpy++;

	while (*(src + index) != '\0')
	{
		*(destcpy + index) = *(src + index);
		index++;
	}
	*(destcpy + index) = '\0';

	return (dest);
}
