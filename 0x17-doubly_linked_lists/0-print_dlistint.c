#include "lists.h"

/**
 * print_dlistint - print dlistint list
 * @h: Head of the list
 * Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
