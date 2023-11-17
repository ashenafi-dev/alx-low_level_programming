#include "main.h"
#include <ctype.h>

/**
 * string_toupper - to change string to upper case.
 * @str: input array value
 * Return: string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
