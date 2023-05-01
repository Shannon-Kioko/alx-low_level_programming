/*
 * This function free_listint
 * frees a linked list of the type listint_t.
 *
 * @head: pointer to the head of the linked list
 *
 * Return: Nothing
 */
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
  /*
   * free(head) - segmentation fault
   * already null
   */
}
