#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @*a: integer to be considered
 * @n: number of elementsin the array to beprinted
 * Return: a and n input
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
