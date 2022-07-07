#include "lists.h"
/**
 * get_dnodeint_at_index- Function that returns the nth node of a
 * dlistint_t linked list.
 * @head: node head
 * @index:s the index of the node, starting from 0
 * Return: the nth node or if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int posicion = 0;

	if (head == NULL)
		return (NULL);
	while (posicion < index)
	{
		if (head->next == NULL)/*si el nodo No existe*/
			return (NULL);
		head = head->next;
		posicion++;
	}
	return (head);
}
