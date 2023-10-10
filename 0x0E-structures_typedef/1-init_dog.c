#include <stdlib.h>
#include "dog.h"

/**
* initialize_dog - sets the values of a struct dog variable
* @d: pointer to struct dog to be initialized
* @name: name to assign
* @age: age to assign
* @owner: owner to assign
*/
void initialize_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
