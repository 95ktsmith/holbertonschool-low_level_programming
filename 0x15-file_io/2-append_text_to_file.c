#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * Description: Appends text to the end of a file. Does not create the file
 *              if it does not already exist.
 * @filename: Name of the file
 * @text_content: Text to write to the file
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, text_length = 0;
	ssize_t written_bytes;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (*(text_content + text_length))
			text_length++;
		written_bytes = write(file, text_content, text_length);
		if (written_bytes != text_length)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
