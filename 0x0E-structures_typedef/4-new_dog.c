#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
	{
		free(name);
		free(owner);
		return (NULL);
	}
	user->name = strdup(name);
	user->age = age;
	user->owner = strdup(owner);

	return (user);

}
