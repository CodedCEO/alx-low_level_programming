#include "main.h"

/**
 * puts2 - prnts every other character of a string
 * @str - string to be printed
 *
 * Reurn: void
 */
void puts2(char *str)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		if (count % 2 != 0)
		{
			_putchar(str[i]);
		}
		 count++;
		 i++;
	}
	_putchar('\n');
}
