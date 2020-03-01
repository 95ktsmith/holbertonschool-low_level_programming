#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Prints the minimum number of coins needed to make change
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 * Return: 0 on success, 1 if an error occurred.
 */

int main(int argc, char *argv[])
{
	int cents, coins, quotient, coinindex;
	int coinsize[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		coins = 0;
		for (coinindex = 0; coinindex < 5 && cents > 0; coinindex++)
		{
			quotient = cents / coinsize[coinindex];
			cents -= quotient * coinsize[coinindex];
			coins += quotient;
		}
		printf("%i\n", coins);
	}
	return (0);
}
