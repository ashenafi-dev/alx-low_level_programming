#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments.
 *
 * @argc: parameter;
 * @argv: parameter;
 *
 * Return: int technicaly
 */


int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
