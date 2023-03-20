#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int l = 'A'; l <= 'Z'; l++)
	{
		int a = tolower(l);
		putchar(a);
		putchar('\n');
	}
	return (0);
}
