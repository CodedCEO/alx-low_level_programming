#include "main.h"
#include <stdio.h>

int get_length(char *);

/**
* puts_half - prints the second half of a string
* @str - string to be printed to the screen
*
* Return: void
*/
void puts_half(char *str)
{
	int n;
	int length;
	int start;

	length = get_length(str);
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		start = length - n;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	else
	{
		n = length / 2;
		start = length - n;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	_putchar('\n');
}

/**
 * get_length: determines the length of strings
 * @str - stringwhose lengths are to be determined
 *
 * Return - length
 */
int get_length(char *s)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
