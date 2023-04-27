#include "lists.h"

/**
 * list_len - Returns num of elements in a list_t list.
 * @h: Pointer to head of linked list.
 *
 * Return: The num of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t node_ctr = 0;

	while (h)
	{
		node_ctr++;
		h = h->next;
	}

	return (node_ctr);
}
