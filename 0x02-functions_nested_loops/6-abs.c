#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @nmb: The integer to be computed.
 * Return: The absolute value of the integer.
 */
int _abs(int nmb)
{
	if (nmb >= 0)
		return (nmb);
	else
		return (-nmb);
}
