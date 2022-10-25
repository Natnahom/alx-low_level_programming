#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node
 * @head: a constant list
 * @str: character
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
