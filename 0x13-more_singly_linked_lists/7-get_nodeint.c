#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 *
 * @head: pointer to the list struct.
 * @index: node index.
 *
 * Return: pointer to node of given index, NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
    
		head = head->next;
		i++;
	}
	return (NULL);
}
