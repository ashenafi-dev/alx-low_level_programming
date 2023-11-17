#include "main.h"

/**
 * factorial - factorial function.
 *
 * @n: input value;
 *
 * Return: int value factorial of an input.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
