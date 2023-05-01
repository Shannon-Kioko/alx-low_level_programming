#include "lists.h"
/*
 *  add_nodeint_end: function adds new node at thee end of the linked list.
 *
 * @head: pointer to head of linked list
 * @n: int to be added to new node
 *
 * Return: address of the new element, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	return (new_node);
}
