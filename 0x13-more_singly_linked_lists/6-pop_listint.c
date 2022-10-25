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
	int num;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	num = hold->n;
	*head = hold->next;
	free(hold);

	return (num);
}
