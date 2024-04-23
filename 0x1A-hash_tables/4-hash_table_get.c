#include "hash_tables.h"

/**
 * hash table get - this helps retrieve the tvalue associated with a key		     in a hash table
 * *ht: pointer to the hash table
 * key: the key to get the value
 *
 * return: if != key - NULL
 * \else - value associated with the key in ht
 */

char *hash_table_set(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ndex = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while(node && strcmp(node->key, key) !=0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);

}
