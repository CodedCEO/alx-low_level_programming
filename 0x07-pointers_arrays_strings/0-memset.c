#include "main.h"

/*
 * Description - writes a function that fills memory eith constant byte
 * _memset - fills a memory buffer with a constant byte/character
 * @s: Pointer to the byte buffer
 * @b: Constant byte
 * @n: Number of buffer spaces to fill
 *
 *Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
