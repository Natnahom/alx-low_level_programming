#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
