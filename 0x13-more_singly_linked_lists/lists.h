#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: an int
 * @next: points to next node
 *
 * Description: singly linked list node structure.
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#include <stdio.h>
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*
 * listint_len - This returns the numof elements in a linked list.
 * @h: pointer to the list struct.
 *
 * Description: function listint_len returns the number of
 * elements in a linked list.
 * starting from given head node.
 * Return: numof elements in the linked list.
 */
size_t listint_len(const listint_t *h);

/*
 * function adds a new node at the beginning of the linked list.
 *
 * @head: pointer to the head of linked list..
 * @n: int to add to thee new node.
 *
 * Return: address of thee new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);

/*
 * print_listint - This prints all the elements of a singly linked list
 *
 * @h: pointer to the list struct.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

#endif
