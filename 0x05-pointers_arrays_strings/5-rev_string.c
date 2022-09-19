#include "main.h"

int get_length(char *);

/**
 * rev_string -reverses a string
 * @: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int i;
	int j;

	length = get_length(s);

	for (i = 0, j = length - 1; !(i >= j); i++, j--)
	{
		char count;

		count = s[i];
		s[i] = s[j];
		s[j] = count;
	}
}

/**
 * get_length - returns string length
 * @s: string whose length is to be determined
 *
 * Return - length of string
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}
	return (length);
}
