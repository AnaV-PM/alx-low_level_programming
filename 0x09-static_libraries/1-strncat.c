#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')

		j++;
		i++;


	i = 0;
	while (*(src + i) != *(src + n))

		*(dest + j) = *(src + i);
		i++;
		j++;

	*(dest + j) = '\0';
	return (dest);
}
