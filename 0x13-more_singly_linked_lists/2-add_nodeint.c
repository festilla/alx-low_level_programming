#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list.
* @head: Pointer to the head of the list.
* @n: The value to be stored in the new element.
*
* Return: A pointer to the new element, or NULL if allocation fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (*head);
}
