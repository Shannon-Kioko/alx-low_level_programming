#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to head of linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
