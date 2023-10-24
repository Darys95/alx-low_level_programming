#include "lists.h"

/**
 * sum_listint - for calculating sum of all the data in a listint_t list
 * @head: first node of the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
