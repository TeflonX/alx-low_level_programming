#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * Return: dog_t
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner's name.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;

	return (user);

}
