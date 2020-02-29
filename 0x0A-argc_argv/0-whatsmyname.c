#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the name of the program, followed by a new line.
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
