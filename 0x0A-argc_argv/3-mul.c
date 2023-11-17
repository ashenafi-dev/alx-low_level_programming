#include <stdio.h>
#include <stdlib.h>

/**
 * main - print it's name
 *
 * @argc: parameter;
 * @argv: parameter;
 *
 * Return: int technicaly
 */


int main(int argc, char **argv)
{
	if ((argc - 1) != 2)
	{
		printf("%s\n", "Error");
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * (atoi(argv[2]))));
	}
	return (0);
}
