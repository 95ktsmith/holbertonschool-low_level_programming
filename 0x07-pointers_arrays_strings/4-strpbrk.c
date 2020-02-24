#include "holberton.h"

/**
 * _strpbrk - String point break
 * Description: Finds the first occurance in string s of any characters from
 *              string accept.
 * @s: String to look through
 * @accept: Characters to look for
 * Return: Pointer to first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int sindex, aindex;
	int done = 0;

	for (sindex = 0; *(s + sindex) != '\0' && done == 0; sindex++)
	{
		for (aindex = 0; *(accept + aindex) != '\0'; aindex++)
		{
			if (*(s + sindex) == *(accept + aindex))
			{
				done = 1;
				break;
			}
		}
	}
	if (*(s + sindex) == '\0')
		return (0);
	else
		return (s + sindex - 1);
}
