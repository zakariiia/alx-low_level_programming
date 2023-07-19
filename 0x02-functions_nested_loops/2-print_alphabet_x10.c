#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char lttr;

	while (i++ <= 9)
	{
		for (lttr = 'a'; lttr <= 'z'; lttr++)
			_putchar(lttr);
		_putchar('\n');
	}
}
