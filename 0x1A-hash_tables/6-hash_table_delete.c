#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *temp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				temp = aux;
				aux = aux->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
