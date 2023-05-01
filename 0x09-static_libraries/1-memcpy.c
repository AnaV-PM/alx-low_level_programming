#include "main.h"

/**
* _memcpy - copies memory data
* @dest: buffer to be copied to
* @src: buffer to be copied from
* @n: number of bytes to be copied
* Return: returns pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
	}
