#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_separator - print separator
 * Description: Searches through the rest of the format string to check if
 *              the print separator should be printed.
 * @format: format string
 */
void print_separator(const char * const format)
{
	int index;
	char c;

	index = 0;
	while (*(format + index))
	{
		c = *(format + index);
		if (c == 'c' ||
		    c == 'i' ||
		    c == 'f' ||
		    c == 's')
		{
			printf(", ");
			return;
		}
		index++;
	}
}
/**
 * print_all - print all types
 * Description: prints anything of type char, int, float, or char *
 * @format: string specifying type for each printed argument
 */
void print_all(const char * const format, ...)
{
	int findex;
	va_list args;
	char *str;

	va_start(args, format);
	findex = 0;
	while (*(format + findex))
	{
		switch (*(format + findex))
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			switch (str == NULL)
			{
			case 0:
				printf("%s", str);
				break;
			default:
				printf("(nil)");
				break;
			}
			break;
		default:
			findex++;
			continue;
			break;
		}
		print_separator(format + ++findex);
	}
	printf("\n");
}
