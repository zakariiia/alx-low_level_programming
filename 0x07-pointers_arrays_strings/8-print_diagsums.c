#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int som1, som2, y;

	som1 = 0;
	som2 = 0;

	for (y = 0; y < size; y++)
	{
		som1 = som1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		som2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", som1, som2);
}
