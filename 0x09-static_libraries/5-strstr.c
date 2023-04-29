#include "main.h"
/***#### anav-pm ###***/
/**
 * _strstr - first occurrence
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return:Returns a pointer to the beginning of the located
 * substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
	}
