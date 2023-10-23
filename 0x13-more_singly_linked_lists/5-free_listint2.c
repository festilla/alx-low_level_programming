#include "lists.h"

/**
* free_listint2 - Frees a linked list and
* sets the head pointer to NULL.
* @head: Pointer to the head of the list.
*
* Return: No return value.
*/
void free_listint2(listint_t **head)
{
listint_t *temporary;
listint_t *currentNode;
if (head != NULL)
{
currentNode = *head;
while ((temporary = currentNode) != NULL)
{
currentNode = currentNode->next;
free(temporary);
}
*head = NULL;
}
}
