#include <stdlib.h>
#include "dog.h"

/**
* _strlen - computes the length of a string
* @s: the string to calculate the length of
*
* Return: the length of the string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
/**
* _strcpy - copies the source string into the destination buffer
* @dest: the destination buffer
* @src: the source string to copy
*
* Return: a pointer to the destination buffer
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - creates a new dog with specified name, age, and owner
* @name: the name of the new dog
* @age: the age of the new dog
* @owner: the owner of the new dog
*
* Return: a pointer to the new dog (success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
