#include "lists.h"


/**
* print_listint_safe - prints a listint_t linked list, even if it has a loop
* @head: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *tortoise, *hare;

tortoise = hare = head;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;

printf("[%p] %d\n", (void *)tortoise, tortoise->n);

if (tortoise == hare)
{
count++;
tortoise = head;
while (tortoise != hare)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next;
count++;
}
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
return (count);
}
else
{
count++;
}
}

while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}

exit(98);
}
