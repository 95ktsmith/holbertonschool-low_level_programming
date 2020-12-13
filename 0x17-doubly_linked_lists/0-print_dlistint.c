#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a double list
 * @h: head of list
 * Return: # of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node_count = 0;

	if (h == NULL)
		return(node_count);
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
