#include "main.h"

int main(void)
{
	hashTable *ht = create_table(TABLE_SIZE);
	ht_insert(ht, "1", "First address");
	ht_insert(ht, "2", "Second address");
	print_table(ht);
	free_table(ht);
	return 0;
}
