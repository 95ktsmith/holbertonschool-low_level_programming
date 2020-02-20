#include "holberton.h"

/**
 * _strcmp - String compare
 * Description: Compares two strings and returns a value equal to their
 *              ASCII value difference
 * @s1: String 1
 * @s2: String 2
 * Return: Value difference
 */

int _strcmp(char *s1, char *s2)
{
	int diff, index;

	diff = 0;
	index = 0;

	while (s1[index] != '\0' && s2[index] != '\0' && diff == 0)
	{
		if (s1[index] - s2[index] != 0)
			diff = s1[index] - s2[index];
		index++;
	}
	return (diff);
}
