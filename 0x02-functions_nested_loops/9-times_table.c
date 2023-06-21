#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
printf("%d", i * j);
else if (i * j < 10)
printf(",   %d", i * j);
else
printf(", %d", i * j);
}
_putchar('\n');
}
}
