#include "main.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: lists
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->n, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
