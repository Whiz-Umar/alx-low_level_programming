/**
 * _strlen - This function evaluates the length of a given string.
 * 
 *@s: The string to be evaluated
 *
 * Return: Length of s
 */

int _strlen(char *s)
{
	long int length = 0;

	while (s[length] != '\0')
		length++;

return (length);
}
