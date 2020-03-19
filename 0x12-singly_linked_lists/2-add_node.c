#include "lists.h"
char *_cstrdup(const char *str);

/**
 * add_node - add node
 * Description: Adds a node at the start of a list
 * @head: Address of the head of the list
 * @str: String to save to the inserted node
 * Return: Pointer to new head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	if (!head)
	{
		head = malloc(sizeof(list_t *));
		if (!head)
			return (NULL);
	}
	new_node = malloc(sizeof(size_t));
	if (!new_node)
		return (NULL);

	new_node->str = _cstrdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	while (*(new_node->str + length))
		length++;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (*head);
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
