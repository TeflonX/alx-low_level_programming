#include "main.h"
#include <stdio.h>
int main(void)
{	
     char *ptr;

     char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
     ptr = leet(s);
     printf("%s", ptr);
     printf("%s", s);
	
     return (0);
}
