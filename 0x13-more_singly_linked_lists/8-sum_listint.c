#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: head of linked lismt
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	sum = 0;
	if (head == NULL)
		return (sum);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
