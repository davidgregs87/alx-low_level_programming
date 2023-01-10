#include "main.h"

hashTable *create_table(int size)
{
	/* creates a new hashTable */
	int i = 0;
	hashTable *table = (hashTable *)malloc(sizeof(hashTable));
	table->size = size;
	table->count = 0;
	table->items = (Ht_item **)calloc(table->size, sizeof(Ht_item *));
	for (i = 0; i < table->size; i++ )
		table->items[i] = NULL;

	return table;
}

