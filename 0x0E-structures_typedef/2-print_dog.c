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
		if (d->name == NULL)
			printf("Name: (nil)");

		if (d->owner == NULL)
			printf("Owner: (nil)");
		printf
	("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
