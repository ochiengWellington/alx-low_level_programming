#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;
	int a;

	for (l = 'A'; l <= 'Z'; l++)
	{

		a = tolower(l);
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	return (0);
}
