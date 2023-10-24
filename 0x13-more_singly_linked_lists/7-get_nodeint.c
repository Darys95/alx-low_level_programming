#include "lists.h"

/**
 * get_nodeint_at_index - for returning the node at a certain index in a linked list
 * @head: first node of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u = 0;
	listint_t *temp = head;

	while (temp && u < index)
	{
		temp = temp->next;
		u++;
	}

	return (temp ? temp : NULL);
}
