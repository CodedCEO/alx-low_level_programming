#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16
 * in lowercase.
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 'y'; y <= '9'; y++)
	{
	putchar(y + '0');
	}
for (y = 'y'; y	<= 'g'; y++)
{
	putchar(y);
}
putchar('\n');
return (0);
}
