#include "lists.h"

/**
 * free_listint2 - function that frees a linked list.
 *
 * @head: double pointer to the list.
 *
 * Return: void, nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (*head != NULL)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
