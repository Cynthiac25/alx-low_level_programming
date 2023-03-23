#include "main.h"
/**
 *print_last_digit - prints the last digit of a num
 *@n: num to be checked
 *Return: Value of the last digit of the num
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}