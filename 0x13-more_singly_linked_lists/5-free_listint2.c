#include "lists.h"

void free_rec(listint_t *head);

/**
 * free_listint2 - free listint_t
 * Description: Frees a listint_t, sets the head to NULL
 * @head: Head of the list to free
 */

void free_listint2(listint_t **head)
{
	free_rec(*head);
	if (*head)
		*head = NULL;
}

/**
 * free_rec - free recursively
 * Description: Frees a list
 * @head: Head of the list
 */

void free_rec(listint_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_rec(head->next);
	free(head);
}
