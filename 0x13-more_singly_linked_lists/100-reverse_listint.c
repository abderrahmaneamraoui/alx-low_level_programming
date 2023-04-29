#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to pointer to the head of the linked list
*
* Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (*head);
}
