/**
 * _strncpy -  copies a string into another
 *
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to copy from src to dest
 *
 * Return: A pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, length;

	i = 0;
	while (src[i] != '\0')
		i++;
	length = i;

	j = 0;
	while (j < n)
	{
		if (j < length)
			dest[j] = src[j];
		else
			dest[j] = '\0';
		j++;
	}

return (dest);
}
