#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * Description: frees the memory allocated for a dog struct
 * @d: struct dog variable to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
