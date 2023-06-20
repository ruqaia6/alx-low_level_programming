#include <stdio.h>
#include "main.h"

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar('\n');

return;
}
