#include "dog.h"
/**
 * free_dog - frees all memory that frees dog
 * @d: dog to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
	free(d->name);
	if (d->owner == NULL)
		return;
	else if (d->owner != NULL)
		free(d->owner);
}
