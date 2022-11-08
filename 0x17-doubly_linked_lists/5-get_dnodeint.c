#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: the linked list
 * @index: nth
 * Return: a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;

	while (temp && count < index)
	{
		temp = temp->next;
		++count;
	}
	return (temp);
}
