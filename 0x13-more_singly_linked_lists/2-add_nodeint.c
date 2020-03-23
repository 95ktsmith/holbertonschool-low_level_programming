#include "lists.h"

/**
 * add_nodeint - add node
 * Description: Adds a node at the beginning of a list
 * @head: Address of the head node
 * @n: Integer to give new node
 * Return: Address of the new node, or NULL in failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}
