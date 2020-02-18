#include "holberton.h"

/**
 * _strlen - Returns lenght of a string
 * @s: Incoming string
 * Description: Counts the number of charaters in a string, returns that number
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int strlen, done;

	done = 0;
	strlen = 0;

	while (done == 0)
	{
		if (*(s + strlen) != '\0')
			strlen++;
		else
			done = 1;
	}
	return (strlen);
}
