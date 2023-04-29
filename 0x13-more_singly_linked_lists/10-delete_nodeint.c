#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of a listint_t linked list.
* @head: pointer to the head of the linked list
* @index: index of the node to delete, starting at 0
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (*head == NULL) /* empty list */
return (-1);

if (index == 0) /* delete the first node */
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

/* find the node before the one to delete */
current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL) /* index out of range */
return (-1);
current = current->next;
}

/* delete the node */
temp = current->next;
if (temp == NULL) /* index out of range */
return (-1);
current->next = temp->next;
free(temp);

return (1);
}
