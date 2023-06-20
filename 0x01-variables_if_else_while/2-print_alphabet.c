#include <stdio.h>
/*
 *
 * Main - main block
 *
 * description: use 'putchar' function to print alphabets in lower case.
 *
 * Return (0)
 * 
 */
int main(void)

{
	char alpha = 'a';

	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);

}
