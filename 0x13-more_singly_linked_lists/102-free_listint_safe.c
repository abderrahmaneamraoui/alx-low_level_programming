#include "lists.h"

/**
* free_listint_safe - Frees a linked list of integers safely
*
* @h: Pointer to a pointer to the first node in the list
*
* Return: The number of nodes freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *tmp;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
count++;
tmp = current;
current = current->next;

/* Free the node only if it hasn't been freed yet */
if (tmp < current)
{
free(tmp);
}
else
{
/* Set the next pointer of the last freed node to NULL */
tmp->next = NULL;
}

/* Stop the loop if we have reached the beginning of the list */
if (current == *h)
break;
}

/* Set the head pointer to NULL */
*h = NULL;

return (count);
}
