#include "main.h"

/**
 * flip_bits - counts the numbers of changed bits
 * @p: first number
 * @q: second num
 *
 * return: number of bits to change
 */

unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = p ^ q;

	for(a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if(current & 1)
			countbit++;
	}

	return (countbit);
}
