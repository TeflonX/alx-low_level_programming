#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog.
 * Return: void.
 * @d: a struct variable.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		if (d->name)
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);

	}
}
