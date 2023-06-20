#include <stdio.h>

/*
 * main - main entry point
 *
 *  Description: print alphabet on a line omitting e and q
 *  using putchar only twice
 *  return: 0
 *
 */

int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
{
putchar(alpha);
alpha++;

if (alpha == 'e' || alpha == 'q')
	alpha++;
}
putchar('\n');
return (0);
}
