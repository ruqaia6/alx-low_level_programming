#include "main.h"

/**
 * rot13 - encoded a string using rot13
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char *rot = s;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot_alpha = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot_alpha[j];
				break;
			}
		}
	}

	return (rot);
}
