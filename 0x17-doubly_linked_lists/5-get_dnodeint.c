#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
