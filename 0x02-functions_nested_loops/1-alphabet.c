#include <stdio.h>
#include "main.h"

void print_alphabet(void);

int main(void)
{
/* Call the print_alphabet function */
print_alphabet();

/* Return 0 to indicate successful execution */
return (0);
}

/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line
*/
void print_alphabet(void)
{
int ch;

/* Loop through each character in the alphabet */
for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);

/* Print a new line character */
_putchar('\n');
return;
}
