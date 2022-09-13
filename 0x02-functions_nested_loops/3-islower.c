#include "main.h"

/**
 * _islower - Is the character a lowercase?
 *
 * Description: This program receives a character from
 * the user and determine wgether it is
 * lowercase or not.
 * Return: 1 (if c is a lowercase) or
 * 0 (if c is not a lower case)
 */

int _islower(c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
					}
}
