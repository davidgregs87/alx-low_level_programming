#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: is the key in strings
 * @size: size of the array of the hash table
 * Return: index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = 0, hash = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
