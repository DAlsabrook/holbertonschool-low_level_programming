#include "dog.h"
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

	pup->name = (char *)malloc(strlen(name) + 1);
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->owner = (char *)malloc(strlen(owner) + 1);
	if (pup->owner == NULL)
	{
		free(pup);
		free(pup->name);
		return (NULL);
	}
	strcpy(pup->name, name);
	strcpy(pup->owner, owner);
	pup->age = age;

	return (pup);
}
