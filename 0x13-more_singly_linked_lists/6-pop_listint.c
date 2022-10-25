#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head nodes data (n)
 * @head: head of linked list
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
