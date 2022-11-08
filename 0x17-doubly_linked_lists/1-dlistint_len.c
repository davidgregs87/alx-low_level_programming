#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the double linked list
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	dlistint_t *tranverse, *holder;

	if (!h)
		return (0);
	tranverse = malloc(sizeof(dlistint_t));
	tranverse->n = h->n;
	tranverse->next = h->next;
	tranverse->prev = h->prev;
	holder = tranverse;
	count = 0;
	while (tranverse->prev)
		tranverse = tranverse->prev;

	while (tranverse)
	{
		tranverse = tranverse->next;
		++count;
	}

	free(holder);
	return (count);
}
