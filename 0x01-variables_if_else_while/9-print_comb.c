#include <stdio.h>

/**
 * main - 
 * Description: 'prints all possible combinations of single-digit numbers'
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
