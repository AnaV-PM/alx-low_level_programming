#include "main.h"

/**
 * get_endianness - Checks endianness of the system
 *
 * Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	if (*endian_check)
		return (1);
	else
		return (0);
}
