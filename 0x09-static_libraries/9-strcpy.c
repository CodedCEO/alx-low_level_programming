#include "main.h"
/*
 * _strcpy - copies the string to the pointer
 * @dest : array that returns
 * @src: the pointer to which the string is sent to
 *
 * Return : dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
