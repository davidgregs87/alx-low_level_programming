#include "hash_tables.h"

/**
 * add_hnode - add node to the hash table
 * @node: hash node to modify
 * @key: key in strings
 * @value: value of the key
 * Return: 1 if it added node or 0 otherwise
 */
int add_hnode(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *temp;

	if (*node == NULL)
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = NULL;
		*node = temp;
	}
	else
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = (*node);
		*node = temp;
	}
	return (1);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the associated key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	int flag = 0;

	if (ht == NULL || value == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		flag = add_hnode(&(ht->array[index]), key, value);
		if (flag == 0)
			return (0);
	}
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			flag = add_hnode(&(ht->array[index]), key, value);
			if (flag == 0)
				return (0);
		}
		else
		{
			free(temp->value);
			temp->value = strdup(value);
		}
	}
	return (1);
}
