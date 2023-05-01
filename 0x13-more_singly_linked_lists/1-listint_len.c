/*
 * listint_len - This returns the numof elements in a linked list.
 *
 * @h: pointer to the list struct.
 *
 * Return: numof elements in the linked list.
 */
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t numo_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		numo_elements++;
	}
	return (numo_elements);
}
