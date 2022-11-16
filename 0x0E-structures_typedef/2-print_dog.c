#include <stdlib.h>
#include <stdio.h>


void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)");
	if (d->age == NULL)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");
	printf("name: %s, age: %.1f, owner: %s\n", d->name, d->age, d ->owner);
}
	
	
