#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - Calculates the length of a string.
* @s: The input string.
* Return: The length of the string.
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* add_node - Adds a new node to the beginning of a list_t list.
* @head: A pointer to the head of the list.
* @str: The string to be inserted into the new element.
* Return: A pointer to the newly added node.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
