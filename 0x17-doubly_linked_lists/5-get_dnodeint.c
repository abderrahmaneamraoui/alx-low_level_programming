#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to head of list
* @index: index of node to return
* Return: pointer to node at index `index`, or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
