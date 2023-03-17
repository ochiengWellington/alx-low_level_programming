#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int integer;
	long int long_int;
	long long int long_long_int;
	char char_type;
	float float_type;
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long_long_int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float_type));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char_type));

	return (0);
}
