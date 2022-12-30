#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog.
 * Return: void.
 * @d: a struct variable.
 * @name: name of dog.
 * @age: dog age.
 * @owner: name of owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
