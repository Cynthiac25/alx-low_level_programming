#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: The character that must be checked
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
