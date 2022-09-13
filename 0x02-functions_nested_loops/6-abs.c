#include "main.h"

/**
 * _abs - prints the absolute value of a nmber
 * @n: the number to be converted into its absolute value
 *
 * Description: This function takes integer 'n'
 * and computes the absolutevalue of 'n'.
 * Return: absolute valueof 'n'
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
