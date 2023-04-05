#include "lists.h"

/**
 * listint_len - print number of elements in a linked
 * @h: head of linked list
 * Return:  returns the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t node = 0;

	while (cursor != NULL)
	{
		node += 1;
		cursor = cursor->next;
	}
	return (node);
}
