#include "holberton.h"

/**
 * cap_string - Capitilize String
 * Description: Capitalizes the first letter of each word in a string
 * @str: String to be processed
 * Return: Pointer to string
 */

char *cap_string(char *str)
{
	int index;
	char previous_character;

	for (index = 0, previous_character = '0'; str[index] != '\0'; index++)
	{
		if (previous_character == ',' ||
		    previous_character == ';' ||
		    previous_character == '.' ||
		    previous_character == '!' ||
		    previous_character == '?' ||
		    previous_character == '"' ||
		    previous_character == '(' ||
		    previous_character == ')' ||
		    previous_character == '}' ||
		    previous_character == '}' ||
		    previous_character == ' ' ||
		    previous_character == 9 ||
		    previous_character == 10 ||
		    index == 0)
		{
			if (str[index] <= 'z' && str[index] >= 'a')
				str[index] -= 32;
		}

		previous_character = str[index];
	}
	return (str);
}
