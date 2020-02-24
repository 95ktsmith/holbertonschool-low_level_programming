#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - String Character
 * Description: Returns a pointer to the first occurance of character c in
 *              string s.
 * @c: Character being looked for.
 * @s: String
 * Return: Pointer to character in string, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != c && *p != '\0')
		p++;

	if (*p == '\0')
		return (NULL);
	else
		return (p);
}
