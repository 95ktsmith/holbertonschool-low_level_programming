#include "holberton.h"

/**
 * _strstr - Search for string
 * Description: Searches for a string within another string.
 * @haystack: String to search through
 * @needle: String to search for
 * Return: Pointer to start of the needle string if found, null otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	int hindex, nindex;
	int hlength = _strlen(haystack);
	int nlength = _strlen(needle);
	int found = 0;

	for (hindex = 0; *(haystack + hindex) != '\0' && found == 0; hindex++)
	{
		found = 1;
		if ((hlength - hindex) - nlength > 0)
		{
			for (nindex = 0; *(needle + nindex) != '\0'; nindex++)
			{
				if (*(haystack + hindex + nindex) !=
				    *(needle + nindex))
				{
					found = 0;
					break;
				}
			}
		}
		else
		{
			found = 0;
			break;
		}
	}

	if (found == 0)
		return (0);
	else
		return (haystack + hindex - 1);
}

/**
 * _strlen - String length
 * Description: Gets the length of a string
 * @str: The string
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	if (length == 0)
		return (0);
	else
		return (length - 1);
}
