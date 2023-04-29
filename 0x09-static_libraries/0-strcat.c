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

/***#### 0-strcat.c ###***/

char *_strncat(char *dest, char *src, int n)
{
	int anav;
	int j;

	i = 0;
	while (dest[anav] != '\0')
{
		anav++;
}
	j = 0;
	while (j < n && src[j] != '\0')
{
	dest[anav] = src[j];
	anav++;
	j++;
}
	dest[anav] = '\0';
	return (dest);
	}
