#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	if (!head)
		return;
	while (head->prev)
		head = head->prev;
	while (head)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
