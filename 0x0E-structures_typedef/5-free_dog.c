#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the memory from the dog
 * @d: pointer to the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
