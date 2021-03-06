#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (!*head)
		return (0);

	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
