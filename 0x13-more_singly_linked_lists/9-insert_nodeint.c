#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position.
 *
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value of the new node
 *
 * Return: address of the new node on success, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (i < idx)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		current_node = current_node->next;
		i++;
	}

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
