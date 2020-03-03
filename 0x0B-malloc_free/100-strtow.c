#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int word_count(char *str);
void char_count(char *str, int *characters, int words);
int _strlen(char *s);
void populate(char **dst, char *src);

/**
 * strtow - string to words
 * Description: Splits a string into words
 * @str: string
 * Return: Pointer to the array of words
 */

char **strtow(char *str)
{
	int words, dstindex;
	int *characters;
	char **dst;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	words = word_count(str);
	characters = malloc(words * 4);
	if (characters == NULL)
		return (NULL);
	char_count(str, characters, words);
	dst = malloc((words + 1) * 8);
	if (dst == NULL)
		return (NULL);
	for (dstindex = 0; dstindex < words; dstindex++)
	{
		dst[dstindex] = malloc(characters[dstindex] + 4);
		if (dst[dstindex] == NULL)
			return (NULL);
	}
	populate(dst, str);
	dst[words] = NULL;
	free(characters);
	return (dst);
}
/**
 * populate - populate
 * Description: Copies words from one string into a 2D array of characters
 * @dst: Destination 2d array
 * @src: Source string
 */

void populate(char **dst, char *src)
{
	int word, windex, sindex;
	char prev_char = '0';

	word = 0;
	windex = 0;
	for (sindex = 0; src[sindex] != '\0'; sindex++)
	{
		if (src[sindex] != ' ' && (prev_char == ' ' || sindex == 0))
		{
			for (windex = 0; src[windex + sindex] != '\0' &&
				     src[windex + sindex] != ' '; windex++)
			{
				dst[word][windex] = src[sindex + windex];
			}
			dst[word][windex] = '\0';
		}
		if (src[sindex] == ' ' && prev_char != ' ' && sindex != 0)
		{
			word++;
		}
		prev_char = src[sindex];
	}
}

/**
 * word_count - word count
 * Description: Counts the number of space-separated words in a string
 * @str: String
 * Return: The number of words
 */

int word_count(char *str)
{
	int words, index;
	char prev_char = '0';

	for (words = 0, index = 0; str[index] != '\0'; index++)
	{
		if (str[index] != ' ' && (prev_char == ' ' || index == 0))
			words++;
		prev_char = str[index];
	}
	return (words);
}

/**
 * char_count - character count
 * Description: Counts the number of characters in each word in a string
 * @str: String
 * @characters: Array of number of characters
 * @words: Number of words in the string
 * Return: An array of the number of characters in each respective word
 */

void char_count(char *str, int *characters, int words)
{
	int index, char_count, char_index;
	char prev_char = '0';

	for (char_index = 0; char_index < words; char_index++)
		characters[char_index] = 0;
	char_index = 0;
	char_count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] != ' ')
			char_count++;
		else
		{
			if (prev_char != ' ' && index != 0)
			{
				characters[char_index] = char_count;
				char_count = 0;
				if (char_index == words - 1)
					break;
				char_index++;
			}
		}
		prev_char = str[index];
	}
	if (characters[char_index] == 0 && char_index < words)
	{
		characters[char_index] = char_count;
	}
}

/**
 * _strlen - string length
 * Description: Gets the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);

	while (*(s + size))
		size++;

	return (size);
}
