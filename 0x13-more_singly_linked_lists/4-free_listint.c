#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: list
 */
void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
