#include "main.h"

char *ht_search(hashTable *table, char *key)
{
	/* searches the key in the hashTable
	   and returns null if it doesn't exist */
	int index = hash(key);
	Ht_item *item = table->items[index];

	/* ensure that we move to a non null item */
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return item->value;
	}
	return NULL;
}
