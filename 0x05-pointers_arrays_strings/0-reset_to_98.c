#include "main.h"

/**
 * reset_to_98 - resets the value of a variable
 * @n: pointer to the variable
 *
 * Description: this function takes a pointer to an integer variable as an
 * argument and uses that pointer to change the value of that variable to 99
 * from inside the function.
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
