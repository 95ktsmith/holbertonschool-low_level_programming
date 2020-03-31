#include "holberton.h"

/**
 * read_textfile - read text from file
 * Description: Reads text from a file and prints a specified number of
 *              characters to the standard output.
 * @filename: Name of the file to read from
 * @letters: Number of characters to print from the file
 * Return: 1 if successful, 0 if not.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_bytes;
	char *buffer;

	if (!filename || letters == 0)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	read_bytes = read(file, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	if (write(1, buffer, read_bytes) != read_bytes)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (read_bytes);
}
