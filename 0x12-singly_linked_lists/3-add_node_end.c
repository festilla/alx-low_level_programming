#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Calculates the length of a string.
* @str: The string to find the length of.
*
* Return: The length of the string.
*/
unsigned int _strlen(char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
;
return (i);
}
/**
* add_node_end - Adds a new node to the end of a linked list.
* @head: A double pointer to a linked list.
* @str: The string to add to the new node.
*
* Return: A pointer to the new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
