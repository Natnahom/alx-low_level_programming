#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: a constant list
 * @str: character
 *
 * Return: number of nodes
 */

list_t *add_nodeint(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
