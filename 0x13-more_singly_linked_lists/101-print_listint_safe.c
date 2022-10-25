#include "lists.h"
/**
  * print_listint_safe - define function
  * @head: lists
  * Return: what does it return?
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
