#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to beginning of list
 * @head: head of list
 * @n: number
 * Return: address of new nodes or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	new->next = NULL;
	temp->next = new;
	return (new);
}
