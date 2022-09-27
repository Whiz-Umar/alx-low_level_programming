#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searched
 * @needle: string to be searched for
 *
 * Return: pointer to a char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, length;
	char *found = NULL;

	i = 0;
	while (needle[i] != '\0')
		i++;
	length = i;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i] == needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				break;
			++i;
		}

		if (j == length)
		{
			found = (haystack + i - length);
			break;
		}
	}

	return (found);
}
