#include "lists.h"

/**
* get_nodeint_at_index - Retrieves the node
* at a specified index in a linked list.
* @head: Pointer to the head of the list.
* @index: The index of the desired node.
*
* Return: A pointer to the nth node.
* If the node does not exist, it returns NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int currentIndex;
for (currentIndex = 0; currentIndex < index && head != NULL; currentIndex++)
{
head = head->next;
}
return (head);
}
