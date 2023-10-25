#include "main.h"
/**
 * new_dog -  make new dog
 * @name: name of new doggy
 * @age: age of new doggie
 * @owner: owner of the new doggee
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
	{
		return (NULL);
	}

	pup->name = (char *)malloc(strlen(name));
	if (pup->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	pup->owner = (char *)malloc(strlen(owner));
	if (pup->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(pup->name, name);
	strcpy(pup->owner, owner);
	pup->age = age;

	return (pup);
}
