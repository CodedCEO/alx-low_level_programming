#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combination of single digits
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y + '0');

		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
