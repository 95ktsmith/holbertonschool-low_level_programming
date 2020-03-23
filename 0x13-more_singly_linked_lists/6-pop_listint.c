#include "lists.h"

/**
 * pop_listint - pop list head
 * Description: Deletes the head of a list
 * @head: Address of the head node
 * Return: The value from the deleted node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (!(*head))
		return (0);

	value = (*head)->n;
	tmp = *head;
	*head = tmp->next;
	free(tmp);
	return (value);
}
