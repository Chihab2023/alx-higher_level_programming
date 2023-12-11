#include "lists.h"

/**
 * function in C that inserts a number into a sorted singly linked list
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node = *head, *x;

    x = malloc(sizeof(listint_t));
    if (x == NULL)
        return (NULL);
    x->n = number;

    if (node == NULL || node->n >= number)
    {
        x->next = node;
        *head = x;
        return (x);
    }

    while (node && node->next && node->next->n < number)
        node = node->next;

    x->next = node->next;
    node->next = x;

    return (x);
}
