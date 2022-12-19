#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * Return: pointer to the modified string
 * @s: string to be modified
 */
char *leet(char *s)
{
	int index1, index2;
	char arr[] = "OL^EA^^T";

	while (s[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if
			(
			arr[index2] == s[index1] ||
			arr[index2] == s[index1] - 32
			)
				s[index1] = index2 + '0';
		}

		index1++;
	}

	return (s);
}
