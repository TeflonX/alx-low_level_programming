#include "main.h"
#include <stdio.h>
int main(void)
{	
     char *p;
/*    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
  */ char s[] = "ROT13 (\"rotntr oy 13 pynprs\", sozrtvzrs uypurnntrq ROT-13) vs n svzpyr yrttrr suostvtutvon pvpurr.\n";
     p = rot13(s);
     printf("%s", p);
     printf("------------------------------------\n");
     printf("%s", s);
     printf("------------------------------------\n");
     p = rot13(s);
     printf("%s", p);
     printf("------------------------------------\n");
     printf("%s", s);
     printf("------------------------------------\n");
     p = rot13(s);
     printf("%s", p);
     printf("------------------------------------\n");
     printf("%s", s);
     return (0);
}
