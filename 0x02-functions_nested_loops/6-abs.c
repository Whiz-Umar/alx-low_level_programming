#include "main.h"

/**
* _abs - Computes the absolute value of a number
*
* @n: The integer to be examined
*
* Return: positive, 0 or negative
 */

int _abs(int n)
{
	int ret_val;

	if (n > 0)
	{
	ret_val = n * 1;
	}
	if (n == 0)
	{
	ret_val = 0;
	}
	if (n < 0)
	{
	ret_val = n * -1;
	}
return (ret_val);
}
