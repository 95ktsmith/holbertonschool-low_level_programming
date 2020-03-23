#include "lists.h"

/**
 * free_listint - free listint_t
 * Description: Frees a listint_t
 * @head: Head of the list to free
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
