#include "lists.h"
/**
 * listint_len - return the number of a listint_t list
 * @h: linked list to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
