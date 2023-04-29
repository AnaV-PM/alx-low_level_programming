#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

/***#### 0-memset.c ###***/

char *_memset(char *s, char b, unsigned int n)
{
	int anv = 0;

	for (; n > 0; anv++)
	{
		s[anav] = b;
		n--;
	}
	return (s);
}
