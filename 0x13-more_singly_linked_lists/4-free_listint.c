#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
(
 	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(&head->n);
		head = temp;
	}

	free(head);
}
