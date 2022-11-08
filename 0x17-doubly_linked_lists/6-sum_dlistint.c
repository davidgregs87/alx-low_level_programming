#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: the linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *hold;
	int sum = 0;

	hold = head;
	while (hold)
	{
		sum += hold->n;
		hold = hold->next;
	}

	return (sum);
}
