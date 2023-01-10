#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define TABLE_SIZE 50000

typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;

typedef struct hashTable
{
	Ht_item **items;
	int size;
	int count;
} hashTable;

unsigned int hash(const char *key);
Ht_item *create_item(char *key, char *value);
hashTable *create_table(int size);
void free_item(Ht_item *item);
void free_table(hashTable *table);
void ht_insert(hashTable *table, char *key, char *value);
char *ht_search(hashTable *table, char *key);
void print_table(hashTable *table);
void handle_collision(hashTable* table, unsigned long index, Ht_item* item);

#endif
