#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return (-n % 10);
	_putchar(r + '0');
}
