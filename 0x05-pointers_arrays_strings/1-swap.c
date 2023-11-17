#include "main.h"

/**
* swap_int - is a funcion tha swaps
* two pointers without additional
* variable needed.
*
*@a: input
*@b: input
*/

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
