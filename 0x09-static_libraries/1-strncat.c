/**
 * _strncat - concatenates two strings
 *
 * @src: appended string
 * @dest: prepended string
 * @n: number of bytes to append from src
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;
	int terminator = 1;

	i = 0;
	while (src[i] != '\0')
		i++;
	length = i;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	if (n > length)
	{
		n = length;
		terminator = 0;
	}

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (terminator)
		dest[i] = '\0';

return (dest);
}
