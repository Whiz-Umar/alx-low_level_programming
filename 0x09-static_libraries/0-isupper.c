#include "main.h"

/**
* _isupper - Checks for uppercase alphabetic characters
*
* @c: The character to be checked
*
* Return: 1 if c is an uppercase alphabet and 0 if otherwise
*
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
