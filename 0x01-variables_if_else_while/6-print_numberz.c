#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing all single digits of base 10'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	for (digits = 48; digits <= 57; digits++)

		putchar(digits);

	putchar('\n');

	return (0);
}
