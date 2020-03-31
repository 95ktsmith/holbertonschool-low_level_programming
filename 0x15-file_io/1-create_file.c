#include "holberton.h"

/**
 * create_file - create a file
 * Description: Creates a file and writes a string to it.
 * @filename: Name of the file
 * @text_content: Text to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, text_length = 0;
	ssize_t written_bytes;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
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
