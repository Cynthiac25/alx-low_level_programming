#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number to start input from
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n <= 98)
	{
	printf("%d", n);
	if (n != 98)
	{
	printf(", ");
	}
	n++;
	}
	}
	else if (n > 98)
	{
	while (n >= 98)
	{
	printf("%d", n);
	if (n != 98)
	{
	printf(", ");
	}
	n--;
	}
	}
	else
	{
	printf("98");
	}
	printf("\n");
}
