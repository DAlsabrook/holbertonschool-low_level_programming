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
		printf("Name:%s\n Age:%d\n Owner:%s", d.name, d.age, d.owner);
}
