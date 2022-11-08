#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: the linked list
 * @n: the value to add
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
