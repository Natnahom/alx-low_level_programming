#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - define function
  * @head: describe argument
  */
void free_listint2(listint_t *head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
