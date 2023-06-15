#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: double pointer to head of list
* @idx: index at which to insert new node
* @n: value of new node
* Return: address of new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *temp;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;

if (temp == NULL)
return (NULL);

if (temp->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = temp;
new->next = temp->next;
temp->next->prev = new;
temp->next = new;

return (new);
}
