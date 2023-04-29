#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: Pointer to the head of the list.
*
* Return: void.
*/
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
