#include "main.h"

void ht_insert(hashTable *table, char *key, char *value)
{
	/* create the item */
	Ht_item *item = create_item(key, value);
	/* compute the index */
	int index = hash(key);

	Ht_item *current_item = table->items[index];
	if (current_item == NULL)
	{
		/* key does not exist */
		if (table->count == table->size)
		{
			/* hash table is full */
			printf("Insert Error: Hash Table is full\n");
			free_item(item);
			return;
		}

		/* insert directly */
		table->items[index] = item;
		table->count++;
	}
	else
	{
		/* case: we only need to update the value */
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(table->items[index]->value, value);
			return;
		}
		else
		{
			/* case: collision */
			handle_collision(table, index, item);
			return;
		}
	}
}
