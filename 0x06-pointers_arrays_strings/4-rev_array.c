#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input array value
 * @n: inout int value
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
