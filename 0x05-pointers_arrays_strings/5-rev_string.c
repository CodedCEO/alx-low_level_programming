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
