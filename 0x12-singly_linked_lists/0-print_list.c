#include "lists.h"


/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
h = h->next;
count++;
}

return (count);
}
