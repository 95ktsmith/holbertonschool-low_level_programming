#include "holberton.h"

/**
 * leet - 1337 5P34K;
 * Description: Turns a string into a mid 2000's disaster
 * @str: String to be processed
 * Return: Pointer to string
 */

char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', 'o', 'o', '7', '7', '1', '1'};
	int strindex;
	int leetindex;

	for (strindex = 0; str[strindex] != '\0'; strindex++)
	{
		for (leetindex = 0; leetindex < 10; leetindex++)
		{
			if (str[strindex] == letters[leetindex])
			{
				str[strindex] -= (str[strindex] -
						  numbers[leetindex]);
			}
		}
	}
	return (str);
}
