#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - frees the list
 * @head: list
 */
void free_listint(list_t *head)
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
