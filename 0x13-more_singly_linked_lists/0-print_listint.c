/*
 * print_listint - This prints all the elements of a singly linked list
 *
 * @h: pointer to the list struct.
 *
 * Return: number of nodes in the list.
 */
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
