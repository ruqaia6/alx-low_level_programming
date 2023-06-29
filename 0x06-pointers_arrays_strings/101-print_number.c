#include "main.h" 

/** 
 * print_number - Print numbers chars 
 * 
 * @n: integer params
 *
 * Return: 0
 */ 

void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		int digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
