#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s - i);
		*(s - i) = *(s - len + i);
		*(s - len + i) = temp;
	}
}

