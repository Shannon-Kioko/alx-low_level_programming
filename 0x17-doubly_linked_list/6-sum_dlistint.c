#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data in the doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of the data (n), or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
