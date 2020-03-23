#include "lists.h"

/**
 * listint_len - listint length
 * Description: Counts the number of elements in a listint_t
 * @h: listint_t
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (listint_len(h->next) + 1);
}
