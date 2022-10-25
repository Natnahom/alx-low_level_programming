#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node
 * @head: a constant list
 * @str: character
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(list_t **head, const char *str)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
