#include "main.h"

/**
* _isdigit - Checks for numeric character
*
* @c: The character to be checked
*
* Return: 1 if c is a numeric character and 0 if otherwise
*
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
