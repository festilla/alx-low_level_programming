#include "lists.h"

/**
* free_listp2 - Deallocates memory for a linked list of pointers.
* @head: Pointer to the head of the list.
*
* Return: No return value.
*/
void free_listp2(listp_t **head)
{
listp_t *temporary;
listp_t *currentNode;
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

/**
* free_listint_safe - Safely frees a linked list
* of integers while avoiding loops.
* @h: Pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t nodeCount = 0;
listp_t *headPointers, *newNode, *addressCheck;
listint_t *currentNode;
headPointers = NULL;
while (*h != NULL)
{
newNode = malloc(sizeof(listp_t));
if (newNode == NULL)
exit(98);
newNode->p = (void *)*h;
newNode->next = headPointers;
headPointers = newNode;
addressCheck = headPointers;
while (addressCheck->next != NULL)
{
addressCheck = addressCheck->next;
if (*h == addressCheck->p)
{
*h = NULL;
free_listp2(&headPointers);
return (nodeCount);
}
}
currentNode = *h;
*h = (*h)->next;
free(currentNode);
nodeCount++;
}
*h = NULL;
free_listp2(&headPointers);
return (nodeCount);
}
