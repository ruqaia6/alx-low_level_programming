#include "main.h" 

/** 
 * print_number - Print number char 
 * 
 * @n: integer perams
 *
 * Return: 0
 */ 
void print_number(int n)
{
	int i = 1;
	int j = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i >= 10)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		i /= 10;
	}
}

