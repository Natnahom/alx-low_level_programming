#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the list
 * @head: lists
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *curr, *tmp;

	if (head == NULL)
		return;
	tmp = curr = *head;
	if (*head)
	{
		i = curr->n;
		*head = curr->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
