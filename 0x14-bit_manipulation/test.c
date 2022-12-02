#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, num1, num2;

	char *b = "0000000000000000000110010010";

	num1 = strlen(b);

	num2 = atoi(b);
	
	i = 0;
	while (num2 != 0)
	{
		num2 = num2 / 10;
		i++;
	}
	
	printf("num1 = %d\nnum2 = %d\ni = %d\n", num1, num2, i);
	return (0);
}

