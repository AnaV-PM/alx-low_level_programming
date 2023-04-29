#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

/***#### 1-strncat.c ###***/

char *_strncat(char *dest, char *src, int n)
{
	int anv;
	int j;

	anv = 0;
	while (dest[i] != '\0')
{
		anv++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
{
	dest[anv] = src[j];
	anav++;
	j++;
}
	dest[anav] = '\0';
	return (dest);
	}
