#include "main.h"

/**
 * _strlen_recursion - returns to the length of a string
 * @s: pointer to a string
 * Return: int
 */
#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
