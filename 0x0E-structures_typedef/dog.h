#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines information on a canine.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: name of dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

#endif
