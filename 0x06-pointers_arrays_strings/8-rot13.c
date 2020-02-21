#include "holberton.h"

/**
 * rot13 - Rot13 encryption
 * Description: Puts a string through Rot13 encryption
 * @str: String to be processed
 * Return: Pointer to string
 */

char *rot13(char *str)
{
	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotted = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int strindex, letindex;

	for (strindex = 0; str[strindex] != '\0'; strindex++)
	{
		for (letindex = 0; letindex < 52; letindex++)
		{
			if (str[strindex] == letters[letindex])
			{
				str[strindex] = rotted[letindex];
				letindex = 52;
			}
		}
	}
	return (str);
}
