#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current; /*Declaring list*/
	int data;


	if (*head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;
	data = current->n;

	free(current);
	return (data);
}
