#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: node head
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int posicion = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)/*si index = 0 1er nodo*/
	{
		if (temp->next != NULL)/*verifico que el prox nodo exista*/
			temp->next->prev = NULL;/*desconcecto el 2 del nodo prev apunt a null*/
		(*head) = (*head)->next;/*conecto head con el prox apuntando al 2do nodo*/
		free(temp);/*elimino el 1er nodo*/
		return (1);
	}
	while ((temp != NULL) && (posicion < index))
	{
		temp = temp->next;
		posicion++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
