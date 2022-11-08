#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: the double linkedlist
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
	while (tranverse)
	{
		printf("%d\n", tranverse->n);
		tranverse = tranverse->next;
		++count;
	}
	free(holder);
	return (count);
}
