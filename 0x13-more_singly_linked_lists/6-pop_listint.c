#include "lists.h"

/**
* pop_listint - Removes and returns the data
* of the head node of a linked list.
* @head: Pointer to the head of the list.
*
* Return: The data from the removed head node.
*/
int pop_listint(listint_t **head)
{
int headData;
listint_t *newHead;
listint_t *currentNode;
if (*head == NULL)
return (0);
currentNode = *head;
headData = currentNode->n;
newHead = currentNode->next;
free(currentNode);
*head = newHead;
return (headData);
}
