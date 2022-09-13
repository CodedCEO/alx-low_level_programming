#include "main.h"

/**
 * print_sign - Determines if number is signed
 * @n: Integer number to be evaluated
 *
 * Description: This function takes an integer number 'i'
 * as an argument and then determines its signedness of the number. prints '+' if 'i' is greater than zero, 
 * prints '0' if 'i' equals zero and '-' if 'i' is less than zero.
 * Return: 1 (> 0), 0 (== 0) or -1 (< 0)
 */

int print_sign(int i)
{
	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (i >0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
