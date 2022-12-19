#include "main.h"
#include <stdio.h>
int main(void)
{	
     char *ptr;

     char s[] = "hello world! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
     ptr = cap_string(s);
     printf("%s", ptr);
     printf("%s", s);
	
     return (0);
}
