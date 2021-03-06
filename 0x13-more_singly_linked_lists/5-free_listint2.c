#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if ((*head)->next)
		free_listint2(&(*head)->next);

	free((*head));
	*head = NULL;
}
