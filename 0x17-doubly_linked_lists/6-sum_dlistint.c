#include "lists.h"

/**
 * sum_dlistint - sums the node values of a dlistint list
 * @head: Head of the list
 * Return: Sum of the node values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
