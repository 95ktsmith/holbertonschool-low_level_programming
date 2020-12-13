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

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: the list
 * @index: the index
 * Return: data stored at index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_head, *current, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		temp_head = temp->next;
		temp_head->prev = NULL;
		free(temp);
		*head = temp_head;
		return (1);
	}
	temp_head = *head;
	temp = get_dnodeint_at_index(temp_head, index);
	current = get_dnodeint_at_index(temp_head, index - 1);
	if (current == NULL || temp == NULL)
		return (-1);
	current->next = current->next->next;
	current->next->prev = current;
	free(temp);
	return (1);
}
