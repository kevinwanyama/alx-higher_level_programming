#include "lists.h"
/**
 * add_dnodeint- Function that adds a new node at the beginning of a dlistint_t
 * list.
 * @head: head node
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;/*El prox nodo actual sería head*/
	new_node->prev = NULL;/*El nodo prev al primero es NULL*/

	if (*head == NULL)/*Creo la lista si no existe*/
	{
		*head = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
