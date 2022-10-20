#include "lists.h"
#include <stddef.h>

/**
 * free_list - frees the list
 * @head: list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	freed(head->str);
	free(head);
}
