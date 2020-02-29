#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all arguments passed to the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
