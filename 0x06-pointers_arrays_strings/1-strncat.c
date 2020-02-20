#include "holberton.h"

/**
 * _strncat - Concatonates two strings
 * Description: Adds one string to the end of another string.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of elements to be appended
 * Return: Desination string pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destcpy;
	int index;

	index = 0;
	destcpy = dest;
	while (*(destcpy) != '\0')
		destcpy++;

	while (*(src + index) != '\0' && index < n)
	{
		*(destcpy + index) = *(src + index);
		index++;
	}
	while (index < n && *(destcpy + index) != '\0')
	{
		*(destcpy + index) = '\0';
		index++;
	}
	*(destcpy + index) = '\0';

	return (dest);
}
