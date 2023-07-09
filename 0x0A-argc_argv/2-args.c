#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argv: array of arguments
 * @argc: argument count
 *
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
