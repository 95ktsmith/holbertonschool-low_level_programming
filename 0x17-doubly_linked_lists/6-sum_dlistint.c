#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all nodes
 * @head: head of list
 * Return: Sum of n's in list
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	temp = head;
	for (sum = 0; temp != NULL; sum += temp->n)
		temp = temp->next;
	return (sum);
}
