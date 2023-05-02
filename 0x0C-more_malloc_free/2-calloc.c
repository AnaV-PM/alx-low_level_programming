#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, and initializes it to zero.
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element.
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	*(m + i) = 0;
		return (m);
	}
