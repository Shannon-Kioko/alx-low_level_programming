#include "lists.h"

/**
 * sum_listint - computes sum of all ints in a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: the sum of all integers in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
