#include "lists.h"

/**
* sum_listint - Calculates the sum of all the data (n) in a linked list.
* @head: Pointer to the head of the list.
*
* Return: The sum of all the data (n) in the list.
*/
int sum_listint(listint_t *head)
{
int totalSum = 0;
while (head != NULL)
{
totalSum += head->n;
head = head->next;
}
return (totalSum);
}
