#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int carry = 0;

	while (n1[i] != '\0' || n2[j] != '\0')
	{
		int digit1 = n1[i] != '\0' ? n1[i] - '0' : 0;
		int digit2 = n2[j] != '\0' ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (k >= size_r - 1)
			return (0);

		r[k++] = sum % 10 + '0';
		carry = sum / 10;

		if (n1[i] != '\0')
		{
			i++;
		}

		if (n2[j] != '\0')
		{
			j++;
		}
	}

	if (carry > 0 && k < size_r - 1)
	{
		r[k++] = carry + '0';
	}

	if (k >= size_r)
		return (0);

	r[k] = '\0';
	return (r);
}
