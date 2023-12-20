#include "main.h"

/**
 * get endianes - this code checks for the endianness
 *
 * return: 0 if the bei endian, 1 if thw little.
 */

int get_endianness(void)
{
	int a;
	char *c;

	a = 2;
	c = (char *)&a;
	return(*c);
}
