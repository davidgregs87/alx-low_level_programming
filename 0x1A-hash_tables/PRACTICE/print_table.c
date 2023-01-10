#include "main.h"

void print_table(hashTable *table)
{
	int i = 0;
	for (; i < table->size; i++)
	{
		if (table->items[i] && !(i + 1 == table->size))
		{
			printf("{%s : %s, ", table->items[i]->key, table->items[i]->value);
		}
		else
		{
			printf("%s : %s}", table->items[i]->key, table->items[i]->value);
		}
	}
}
