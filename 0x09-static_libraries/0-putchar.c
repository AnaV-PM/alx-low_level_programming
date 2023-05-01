#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 * @c: The character to print
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
