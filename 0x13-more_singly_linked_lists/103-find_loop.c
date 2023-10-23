#include "lists.h"

/**
* find_listint_loop - Locates a loop within a linked list.
* @head: Pointer to the head of the list.
*
* Return: The address of the node where the
* loop begins, or NULL if there's no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slowPointer;
listint_t *fastPointer;
slowPointer = head;
fastPointer = head;
while (head && slowPointer && fastPointer && fastPointer->next)
{
head = head->next;
slowPointer = slowPointer->next;
fastPointer = fastPointer->next->next;
if (head == fastPointer)
{
head = head;
slowPointer = fastPointer;
while (1)
{
fastPointer = slowPointer;
while (fastPointer->next != head && fastPointer->next != slowPointer)
{
fastPointer = fastPointer->next;
}
if (fastPointer->next == head)
break;
head = head->next;
}
return (fastPointer->next);
}
}
return (NULL);
}
