#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: pointer to pointer to head of list_t list.
* @str: string to be added to the new node.
*
* Return: address of the new element or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
