#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a double list
 * @h: head of list
 * Return: # of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node_count;

	if (h == NULL)
		return (0);
	temp = h;
	for (node_count = 0; temp != NULL; node_count++)
		temp = temp->next;
	return (node_count);
}

/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: head of list
 * @index: number node
 * Return: Selected node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int current_index = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (current_index == index)
			return (temp);
		current_index++;
		temp = temp->next;
	}
	return (NULL);
}

/**
 * insert_dnodeint_at_index - adds node at position
 * @h: head of list
 * @idx: number node
 * @n: number
 * Return: New node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_head, *current, *temp, *new;
	unsigned int len = 0;

	temp_head = *h;
	len = dlistint_len(temp_head);
	if (h == NULL || *h == NULL || idx == len)
		return (add_dnodeint_end(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = get_dnodeint_at_index(temp_head, idx);
	current = get_dnodeint_at_index(temp_head, idx - 1);
	if (current == NULL || temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	current->next = new;
	new->prev = current;
	new->next = temp;
	temp->prev = new;
	return (new);
}
