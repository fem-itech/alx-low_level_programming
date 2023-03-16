#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the doubly linked list
 * @index: position of the node to find
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *node = head;

    for (i = 0; node && i < index; i++)
        node = node->next;

    return (node && i == index ? node : NULL);
}
