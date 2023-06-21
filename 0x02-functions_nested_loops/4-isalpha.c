#include <stdio.h>
#include "main.h"

int _isalpha(int c);

int main(void)
{
int c;

c = 'a';
printf("%c: %d\n", c, _isalpha(c));

c = 'A';
printf("%c: %d\n", c, _isalpha(c));

c = '1';
printf("%c: %d\n", c, _isalpha(c));

return (0);
}

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
