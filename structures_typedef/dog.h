#ifndef DOG
#define DOG
#include <stddef.h>
#include <stdio.h>
/**
 * struct dog - dog type
 * @name: char *
 * @age: float
 * @owner: char *
 * Description: dog type animal
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
