#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @*a: integer to be considered
 * @n: number of elementsin the array to beprinted
 * Return: a and n input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
