#include "dog.h"
/**
 * print_dog - prints the dog
 * @d: instance of the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name:(nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age:(nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner ==NULL)
			printf("Owner:(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
