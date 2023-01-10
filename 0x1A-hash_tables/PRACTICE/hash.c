#include "main.h"

unsigned int hash(const char *key)
{
	unsigned long int value = 0;
	unsigned int i = 0;

	/* do several rounds of multiplication */
	for (; key[i]; i++)
		value += key[i];

	/* make sure value is 0 <= value < TABLE_SIZE */
	value = value % TABLE_SIZE;

	return value;
}
