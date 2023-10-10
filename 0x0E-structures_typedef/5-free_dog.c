#include <stdlib.h>
#include "dog.h"

/**
* free_dog - releases the memory allocated for a struct dog
* @d: pointer to the struct dog to be freed
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
