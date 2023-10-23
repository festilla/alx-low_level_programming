#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node
* at the specified index in a linked list.
* @head: Pointer to the head of the list.
* @index: The index of the node to be deleted.
*
* Return: 1 if the deletion succeeds, -1 if it fails.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *previousNode;
listint_t *nextNode;
previousNode = *head;
if (index != 0)
{
for (i = 0; i < index - 1 && previousNode != NULL; i++)
{
previousNode = previousNode->next;
}
}
if (previousNode == NULL || (previousNode->next == NULL && index != 0))
{
return (-1);
}
nextNode = previousNode->next;
if (index != 0)
{
previousNode->next = nextNode->next;
free(nextNode);
}
else
{
free(previousNode);
*head = nextNode;
}
return (1);
}
