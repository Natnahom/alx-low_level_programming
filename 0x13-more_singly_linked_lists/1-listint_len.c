#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: lists
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t NumLists = 0;

	while (h)
	{
		NumLists++;
		h = h->next;
	}
	return (NumLists);
}
