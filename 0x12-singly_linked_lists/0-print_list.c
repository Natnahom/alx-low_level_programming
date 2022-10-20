#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: a constant list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t NumNodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		NumNodes++;
		h = h->next;
	}
	return (NumNodes);
}
