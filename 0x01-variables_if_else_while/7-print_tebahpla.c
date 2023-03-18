#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints both lowercase and uppercase'
 * Return: Always 0 (Success/corrct)
 */
int main(void)
{
	/* the character to be written */
	char lower_case = 122;
	/* write the character to stdout */
	for (lower_case = 122; lower_case >= 97; lower_case--)
		putchar(lower_case);
	putchar('\n');

	return (0);
}
