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
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
