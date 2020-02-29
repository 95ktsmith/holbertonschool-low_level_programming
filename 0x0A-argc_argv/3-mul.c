#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Multiplies two numbers and prints the result
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
