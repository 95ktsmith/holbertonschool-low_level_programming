#include "lists.h"

char *_cstrdup(const char *str);

/**
 * add_node_end - add node at end
 * Description: Adds a node at the end of the list
 * @head: Address of the head of the list
 * @str: String to put in new node
 * Return: Address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *start;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = _cstrdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (*(str + length))
		length++;
	new_node->len = length;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
			return (NULL);
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		start = *head;
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new_node;
		*head = start;
	}
	return (new_node);
}

/**
 * _cstrdup - string duplicate
 * Description: Duplicates a string
 * @str: Source string
 * Return: Pointer to newly created string
 */

char *_cstrdup(const char *str)
{
	int index, size;
	char *dst;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
		size++;

	dst = malloc(size + 1);
	if (dst == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		*(dst + index) = *(str + index);

	*(dst + index) = '\0';

	return (dst);
}
