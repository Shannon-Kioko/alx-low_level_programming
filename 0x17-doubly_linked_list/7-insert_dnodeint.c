#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * of a doubly linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * @idx: Index at which the new node should be inserted.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node on success, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
