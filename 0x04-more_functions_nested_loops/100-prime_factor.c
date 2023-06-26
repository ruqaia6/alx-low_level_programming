#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
<<<<<<< HEAD
int main(void)
{
    long n = 612852475143;
    long i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%ld", i);
            n /= i;
            i--;
        }
    }
    printf("\n");
    return (0);
=======

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%ld", i);
			n /= i;
			i--;
		}
	}
	printf("\n");
	return (0);
>>>>>>> 0c83022c9e8ec75ce59337bcb31a44a4e08c30f6
}
