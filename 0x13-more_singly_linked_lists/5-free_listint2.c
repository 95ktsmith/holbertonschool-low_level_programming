#include "lists.h"

/**
 * free_listint2 - free listint_t
 * Description: Frees a listint_t, sets the head to NULL
 * @head: Head of the list to free
 */

void free_listint2(listint_t **head)
{
	if (!(*head))
		return;
	if ((*head)->next)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
