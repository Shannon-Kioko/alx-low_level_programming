#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 *
 * @head: Ptr to ptr to the head
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
    list_t *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp->str);
        free(tmp);
    }
}
