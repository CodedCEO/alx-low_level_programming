#include "main.h"

/**
 * swap_int -swaps the value s of two integers
 * @a: Pointer to the first integer variable
 * @b: Pointer to the second integer variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int count;

	count = *a;
	*a = *b;
	*b = count;
}
