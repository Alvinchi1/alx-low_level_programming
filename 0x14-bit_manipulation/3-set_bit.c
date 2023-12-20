#include "main.h"

/**
 * set-bit: this code sets the value of a bit to 1 at n index
 * @index: set to bit
 * @n: value to sset
 *
 * return: 1 success
 */

int set_bit(unsigned long int *p, unsigned int index)
{
	unsigned long int setbit;

	if(index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setbit = 1 << index;

	*p = *p | setbit;
	return (1);



}
