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
if (i * j < 10)
printf("%d", i * j);
else if (i * j >=10)
printf(", %d", i * j);
if (j !=9)
printf(", ");
}
_putchar('\n');
}
}
