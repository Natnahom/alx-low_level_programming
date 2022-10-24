#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *curr, *temp;

	if (head == NULL)
		return;
	temp = curr = *head;
	if (*head)
	{
		i = curr->n;
		*head = curr->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
