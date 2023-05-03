#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head:  pointer to a pointer to the head of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now;
	listint_t *new;

	now = *head;
	while (now && now->next != NULL)
		now = now->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (now)
		now->next = new;
	else
		*head = new;
	return (new);
}
