#include "main.h"

/**
 * main - print number 1 - 100 followed by new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 3 print Buzz
 *       numbers that are multiples of 3 and 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
	if (i < 100)
		printf(" ");
}
