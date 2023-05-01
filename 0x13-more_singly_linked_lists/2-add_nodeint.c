#include "lists.h"
/*
 * function adds a new node at the beginning of the linked list.
 *
 * @head: pointer to the head of linked list..
 * @n: int to add to thee new node.
 *
 * Return: address of thee new element, NULL otherwise
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return NULL;
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
