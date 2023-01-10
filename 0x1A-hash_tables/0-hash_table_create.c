#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;
	hash_node_t **items;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	items = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (items == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		items[i] = NULL;
	table->size = size;
	table->array = items;
	return (table);
}
