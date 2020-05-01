#include "lists.h"

/**
 * add_dnodeint - add node at the start of a doubly linked list
 * @head: Address of the head of the list
 * @n: Value to give the new node
 * Return: Address of the new node, or NULL in failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
