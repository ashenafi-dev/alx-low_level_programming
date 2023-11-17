#include "main.h"

/**
 * _pow_recursion - returns the power funcion.
 *
 * @y: input values
 * @x:input values
 *
 * Return: the calculated value.
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1 / (x * _pow_recursion(x, -y - 1)));
	}
}
