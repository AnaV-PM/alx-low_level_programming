#include "lists.h"
/**
 * list_len - return the number of a listint_t list
 * @h: linked list to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
