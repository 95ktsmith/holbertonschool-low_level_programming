#include "holberton.h"

void copy_to_file(int file_from, char *from_name, int file_to, char *to_name);

/**
 * main - entry point
 * Description: Copies the contents of one file to another.
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, perm);

	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_to_file(file_from, argv[1], file_to, argv[2]);

	if (close(file_from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * copy_to_file - copy content to file
 * Description: Copies the contents from one file to another.
 * @file_from: fd of the source file
 * @from_name: Name of the source file
 * @file_to: fd of the destination file
 * @to_name: Name of the destination file
 */

void copy_to_file(int file_from, char *from_name, int file_to, char *to_name)
{
	char buffer[1024];
	ssize_t read_bytes, written_bytes;

	while (1)
	{
		read_bytes = read(file_from, buffer, 1024);
		if (read_bytes < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", from_name);
			exit(98);
		}
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				to_name);
			exit(99);
		}
		if (written_bytes != 1024)
			break;
	}
}
