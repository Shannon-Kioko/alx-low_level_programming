#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 *
 * @head: Pointer to head of linked list
 * @str: String val to be appended to the list
 *
 * Return:  Address of new element, or NULL if it failure
 */


list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = malloc(sizeof(list_t));

    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
  
    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        list_t *current_n = *head;
        while (current_n->next != NULL)
        {
            current_n = current_n->next;
        }
        current_n->next = new_node;
    }

    return (new_node);
}

