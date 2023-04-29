#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: pointer to the head of the linked list
* @index: index of the node to return (starting from 0)
*
* Return: pointer to the nth node of the list, or NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

current = head;
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}
return (current);
}

