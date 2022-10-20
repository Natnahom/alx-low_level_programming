#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: list
 * @str: string
 *
 * Return: Null or address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new, *curr;

	if (str == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
		return (NULL);
	new->str = dup;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	return (*head);
}
