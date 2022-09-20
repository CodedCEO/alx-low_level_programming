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
	int i, x, y;

	x = strlen(str);
	if (x % 2 == 1)
		y = (x / 2) + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
