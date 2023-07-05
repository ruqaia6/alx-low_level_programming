#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to the string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (_palindrome_helper(s, len));
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string to get the length of.
 *
 * Return: the length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _palindrome_helper - helper function for is_palindrome.
 * @s: pointer to the string to check.
 * @len: length of s.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int _palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (_palindrome_helper(s + 1, len - 2));
}
