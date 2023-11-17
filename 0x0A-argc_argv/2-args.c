#include <stdio.h>

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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
