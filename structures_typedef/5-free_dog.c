#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to dog to free
 *
 * Description: Frees the memory for the name and owner strings,
 * then frees the dog structure itself. Does nothing if d is NULL.
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}
