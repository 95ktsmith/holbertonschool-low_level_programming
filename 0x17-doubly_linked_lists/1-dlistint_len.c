#include "lists.h"

/**
 * dlistint_len - dlistint list length
 * @h: Head of the list
 * Return: Number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + dlistint_len(h->next));
}
