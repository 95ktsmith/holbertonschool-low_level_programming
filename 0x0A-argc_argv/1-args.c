#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the number of args passed to the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%i\n", argc);
	return (0);
}
