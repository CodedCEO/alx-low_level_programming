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
	int n;
	int k;

	length = get_length(s);

	for (n = 0, k = length - 1; !(n >= k); n++, k--)
	{
		char count;

		count = s[n];
		s[n] = s[k];
		s[k] = count;
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
	int n;

	length = 0;
	n = 0;
	while (s[n] != '\0')
	{
		++length;
		n++;
	}
	return (length);
}
