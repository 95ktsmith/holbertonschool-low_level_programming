#include "lists.h"

/**
 * free_list - free list
 * Description: Frees a singly linked list of list_t
 * @head: Head of list to free
 */

void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
