#include "lists.h"

/**
 * list_len - prints the number of lists
 * @h: a constant list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t NumLists = 0;

	while (h)
	{
		NumLists++;
		h = h->next;
	}
	return (NumLists);
}
