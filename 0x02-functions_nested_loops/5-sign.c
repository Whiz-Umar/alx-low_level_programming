#include "main.h"

/**
* print_sign - Check and prints the sign of a number
*
* @n: The integer to be examined
*
* Return: 1 if n is positive, 0 if n is  and -1 if n is negative
 */

int print_sign(int n)
{
	int ret_val;

	if (n > 0)
	{
	_putchar(43);
	ret_val = 1;
	}
	if (n == 0)
	{
	_putchar(48);
	ret_val = 0;
	}
	if (n < 0)
	{
	_putchar(45);
	ret_val = -1;
	}
return (ret_val);
}
