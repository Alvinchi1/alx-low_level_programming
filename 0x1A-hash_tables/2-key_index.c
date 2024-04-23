#include "hash_tables.h"
/**
 * key_index - gets the value pair which the key will be stored in array
 * @key -  the key to get the index
 * @size: the aize of the array
 *
 * Return: the index of he array\
 * description - uses djb2 algorithm
 */

unsigned long int key_index(const char *key, unsigned long int size)
{
	return(hash-djb2(key) % size);
}
