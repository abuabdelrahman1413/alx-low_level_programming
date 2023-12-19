#include "main.h"

/**
 *print_sign - print sign of number
 *@n: number
 *Return: 1 for + -1 for - 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
