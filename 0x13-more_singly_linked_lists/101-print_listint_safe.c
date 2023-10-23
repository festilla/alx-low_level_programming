#include "lists.h"

/**
* free_listp - Deallocates memory for a linked list.
* @head: Pointer to the head of the list.
*
* Return: No return value.
*/
void free_listp(listp_t **head)
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
* print_listint_safe - Safely prints a linked list while avoiding loops.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodeCount = 0;
listp_t *headPointers, *newNode, *addressCheck;
headPointers = NULL;
while (head != NULL)
{
newNode = malloc(sizeof(listp_t));
if (newNode == NULL)
exit(98);
newNode->p = (void *)head;
newNode->next = headPointers;
headPointers = newNode;
addressCheck = headPointers;
while (addressCheck->next != NULL)
{
addressCheck = addressCheck->next;
if (head == addressCheck->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&headPointers);
return (nodeCount);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nodeCount++;
}
free_listp(&headPointers);
return (nodeCount);
}
