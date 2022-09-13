#include "main.h"

/**
 * _isalpha - Determines alphabetic characters
 * @c: characters to be evaluated
 *
 * Description: This function uses the ASCII code of the character
 * passed to it as an argument when called to determine whether it
 * an alphabet or not
 *
 * Return: 1 if it is an alphabet or 0 if it's not an alphabet.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
	return(0);
	}
}

