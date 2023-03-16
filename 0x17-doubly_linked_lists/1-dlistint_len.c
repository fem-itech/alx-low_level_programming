#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h) {
    size_t count = 0; // Initialize the count variable to 0

    // Traverse the linked list until you reach the end
    while (h != NULL) {
        count++; // Increment the count variable for every node you visit
        h = h->next; // Move the pointer to the next node in the list
    }

    return count; // Return the total count of nodes in the list
}
