#include <stdio.h>
/**
 * main - main block
 * Desription: Print the alphabet in revers order in lowercasee.
 * Return: 0
 */

int main(void)

{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);

}
