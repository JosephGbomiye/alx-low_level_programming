#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints both lowercase and uppercase'
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	/* the character to be written*/
	char upper_case = 'A';
	char lower_case = 'a';
	/* write the character to stdout */
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		putchar (upper_case);

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		putchar (lower_case);
	putchar('\n');

	return (0);
}
