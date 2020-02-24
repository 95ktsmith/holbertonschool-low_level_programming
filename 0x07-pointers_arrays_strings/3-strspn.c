#include "holberton.h"

/**
 * _strspn - Search for characters
 * Description: Returns number of bytes in initial segment s which
 *              consist of only bytes from accept.
 * @s: String to search through
 * @accept: String to characters to look for
 * Return: Number of occurances
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match = 1;
	int sindex, aindex;

	for (sindex = 0; *(s + sindex) != '\0' && match == 1; sindex++)
	{
		match = 0;
		for (aindex = 0; *(accept + aindex) != '\0'; aindex++)
		{
			if (*(s + sindex) == *(accept + aindex))
			{
				length++;
				match = 1;
				break;
			}
			else
				match = 0;
		}
	}
	return (length);
}
