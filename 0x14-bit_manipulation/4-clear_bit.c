#include "main.h"

/**
 * clear_bit - Sets value bit to 0 at a given index
 * @n: Pointer to the number
 * @index: The index of the bit to clear
 *
 * Return: 1 successful, -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1 << index);
	return (1);
}
