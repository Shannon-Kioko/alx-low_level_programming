#include "lists.h"

/*
 * print_listint - This prints all the elements of a singly linked list
 *
 * @h: pointer to the list struct.
 * Description: prints all the elements of a singly linked list
 *
 * Return: number of nodes in the list.
 */

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
