#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the integer that is to be worked on.
 *
 * Description: This function takes 'n' as an argument and then returns the last digit.
 * Return: last digit of 'n'
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned int temp = n == INT_MIN ? ((unsigned int)-(INT_MIN + 1)) + 1U
			: (unsigned int) -n;
		_putchar('0' + (temp % 10));
		return (temp % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
