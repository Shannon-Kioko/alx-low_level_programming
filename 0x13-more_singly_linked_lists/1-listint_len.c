/*
 * listint_len - This returns the numof elements in a linked list.
 * @h: pointer to the list struct.
 *
 * Description: function listint_len returns the number of elements in a linked list.
 * It takes a pointer to the head node of the list as a parameter,
 * and iterates through the list counting each element until the end is reached.
 * The function returns the count of the number of nodes in the list.
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
