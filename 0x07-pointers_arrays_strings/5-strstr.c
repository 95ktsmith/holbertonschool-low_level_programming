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

	for (hindex = 0; *(haystack + hindex) != '\0'; hindex++)
	{
		for (nindex = 0; *(needle + nindex) != '\0'; nindex++)
		{
			if (*(haystack + hindex + nindex) != '\0')
			{
				if (*(haystack + hindex + nindex) !=
				    *(needle + nindex))
					break;
			}
			else
				break;
		}
		if (*(needle + nindex) == '\0')
			return (haystack + hindex);
	}
	return (0);
}
