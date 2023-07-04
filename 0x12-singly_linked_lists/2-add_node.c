#include "lists.h"
/**
 * add_node - add a new node at the beginning of a `list_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *hold;
	list_t *new;

	hold = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (hold == NULL)
		new->next = NULL;
	else
		new->next = hold;

	return (new);
}
