#include "main.h"
#include <stdlib.h>


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	void *p;

	ptr = malloc(old_size);

	p = malloc(new_size);

	for (i = 0; i <

}
