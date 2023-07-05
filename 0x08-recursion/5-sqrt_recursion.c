#include "main.h"

/**
 *  _sqrt_recursion - find natural square root
 *  @n: int
 *  @val: square root
 *  Return: int
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0 || n == 1)
    {
        return (n);
    }
    else
    {
        return (_sqrt_helper(n, 1));
    }
}

int _sqrt_helper(int n, int i)
{
    if (i * i == n)
    {
        return (i);
    }
    else if (i * i > n)
    {
        return (-1);
    }
    else
    {
        return (_sqrt_helper(n, i + 1));
    }
}
