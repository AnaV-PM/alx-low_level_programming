#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 * Return: On success or NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int y;

	if (min > max)
		return (NULL);
	y = max - min;

	arr = malloc(sizeof(int) * (y + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[y] = max;
		y--;
		max--;
	}
	arr[y] = min;
	return (arr);
}
