#include "main.h"

void free_item(Ht_item *item)
{
	/* frees an item */
	free(item->key);
	free(item->value);
	free(item);
}



void free_table(hashTable *table)
{
	/* frees a table */
	int i = 0;
	for (i = 0; i < table->size; i++)
	{
		Ht_item *item = table->items[i];
		if (item != NULL)
			free_item(item);
	}
	free(table->items);
	free(table);
}
