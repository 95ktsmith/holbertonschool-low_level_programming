#include "lists.h"

/**
 * print_listint - print list ints
 * Description: Prints the integers of a listint_t
 * @h: listint_t to print
 * Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);

	printf("%i\n", h->n);
	return (print_listint(h->next) + 1);
}
