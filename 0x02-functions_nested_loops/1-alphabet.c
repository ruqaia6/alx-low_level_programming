#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void);

int main(void)
{
print_alphabet_x10();
return (0);
}

void print_alphabet_x10(void)
{
int ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar('\n');

return;
}
