#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: Value to be checked
 * Return: 1 if value is a digit, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
