#include "3-calc.h"

/**
 * op_add - add operation
 * Description: Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract operation
 * Description: Subtracts one integer from another
 * @a: First integer
 * @b: Integer subtracted
 * Return: Difference between integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operation
 * Description: Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide operation
 * Description: Divides one integer by another
 * @a: First integer
 * @b: Divisor
 * Return: Quotient of integers
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - modulo operation
 * Description: Finds the remainder of two integers
 * @a: First integer
 * @b: Divisor
 * Return: Remainder of integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
