#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check1;

    if (list == NULL || list->next == NULL)
        return (0);
    current = list;
    check1 = current->next;

    while (current != NULL && check1->next != NULL
        && check1->next->next != NULL)
    {
        if (current == check1)
            return (1);
        current = current->next;
        check1 = check1->next->next;
    }
    return (0);
}
