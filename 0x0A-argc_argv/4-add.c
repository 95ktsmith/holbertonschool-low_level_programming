#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Prints the sum of positive integers
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success or no numbers given, or 1 if given a non-number
 */

int main(int argc, char *argv[])
{
	int argvindex, sindex, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (argvindex = 1; argvindex < argc; argvindex++)
	{
		for (sindex = 0; argv[argvindex][sindex]; sindex++)
		{
			if (argv[argvindex][sindex] < 48 ||
			   argv[argvindex][sindex] > 57)
			{
				printf("Error\n");
				return (-1);
			}
		}
	}

	for (argvindex = 1, sum = 0; argvindex < argc; argvindex++)
		sum += atoi(argv[argvindex]);

	printf("%i\n", sum);
	return (0);
}
