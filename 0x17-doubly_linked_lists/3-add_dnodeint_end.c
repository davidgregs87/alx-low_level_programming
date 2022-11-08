#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: the linked list
 * @n: value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *holder;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	holder = *head;
	while (holder->next)
		holder = holder->next;

	new->n = n;
	new->next = NULL;
	new->prev = holder;
	holder->next = new;

	return (new);
}
