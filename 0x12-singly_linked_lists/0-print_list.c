#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements
 * @h: a constant list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->i, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
