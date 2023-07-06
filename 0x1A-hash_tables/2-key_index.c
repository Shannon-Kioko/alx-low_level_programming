#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key
 * key - key to get index for
 * size - unint long for size of array of hash table
 * returns - index the key/val pair should be
 * stored in the arr of hash table
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int hash_value = hash_djb2(key);
		unsigned long int index = hash_value % size;

		return (index);
}
