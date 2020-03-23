#include "lists.h"

/**
 * sum_listint - sum list
 * Description: Adds together the integers in each node of a listint
 * @head: Head of the list
 * Return: Sum of integers
 */

int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
