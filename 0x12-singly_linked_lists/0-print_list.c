#include "lists.h"

/**
 * print_list - print list
 * Description: Prints all of the elements of a list_t list
 * @h: Pointer to head of the list
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements;
	list_t *node;

	if (!h)
		return (0);
	printf("[%i] %s\n",
	       (h->str ? h->len : 0),
	       (h->str ? h->str : "(nil)"));

	elements = 1;
	node = h->next;
	while (node)
	{
		printf("[%i] %s\n",
		       (node->str ? node->len : 0),
		       (node->str ? node->str : "(nil)"));
		node = node->next;
		elements++;
	}
	return (elements);
}
