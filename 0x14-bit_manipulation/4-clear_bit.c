#include "main.h"
#include <stdlib.h>

/**
 * clear-bit: this will set the value of a bit to 0
 * @n: what is founsd in the parameter
 * @index: this is the index
 * return: 1 if suxcessful
 */

int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > sizeof(p) * 8)
		return (-1);
	*p &= ~(1 << index);
	return (1);
}
