#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *             both lowercase or uppercase
 *
 * @c: takes input from other funcations.
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