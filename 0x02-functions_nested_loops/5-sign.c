#include "main.h"

/**
 * print_sign - check the code
 * @n: char to be checked
 * Return: 0 or 1 depend on code
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
