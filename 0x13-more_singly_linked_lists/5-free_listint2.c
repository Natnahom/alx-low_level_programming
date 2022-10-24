#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - define function
  * @head: describe argument
  */
void free_listint2(listint_t *head)
{
	listint_t *temp, *curr;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
