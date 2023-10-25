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
			printf("Name:(nil)\n Age:%lf\n Owner:%s", d->age, d->owner);
		if (d->age == NULL)
			printf("Name:%s\n Age:(nil)\n Owner:%s", d->name, d->owner);
		if (d->owner ==NULL)
			printf("Name:%s\n Age:%lf\n Owner:(nil)", d->name, d->age);
	}
}
