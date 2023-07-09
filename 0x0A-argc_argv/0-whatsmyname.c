#include "main.h"
#include <stdio.h>

/**
 * main - prints name of the program
 * @argv: array of arguments
 * @argc: count of argument
 * Return: always (0)
 */
int main(int agrc_attribute_((unused)), char*agrv[])
{
	printf("%s\n", *argv);

	return (0);
}
