#include "function_pointers.h"

/**
 * print_name - print name
 * Description: Prints an entered name in specified case, as is or upper.
 * @name: Name to print
 * @f: Pointer to functions for as is or uppercase printing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!*f)
		return;
	f(name);
}
