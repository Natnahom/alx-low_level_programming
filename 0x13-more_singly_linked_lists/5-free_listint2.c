#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - define function
  * @head: describe argument
  */
void free_listint2(listint_t *head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
