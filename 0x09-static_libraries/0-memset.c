#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @p: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *p, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		p[i] = b;
		n--;
	}
	return (p);
}
