#include "main.h"

/**
 * _islower - funcation to check if
 *            character is lowercase
 *
 *@c: checks input of funcation
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
