/**
 * pop_listint - deletes the head node of a linked list and
 * returns the head node's data
 *
 * @head: pointer to the list
 *
 * Return: data from deleted head node element, or 0 if the list is empty
 */
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_head = (*head)->next;
  
	free(*head);
	*head = new_head;
  
	return (data);
}
