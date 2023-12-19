#include "main.h"

/**
 * print_last_digit - function to print last digit of number
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n *= -1;
		lastDigit = n % 10;
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	else if (n > 0)
	{
		lastDigit = n % 10;
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	else
	{
		lastDigit = 0;
		_putchar(lastDigit + 48);
		return (0);
	}
}
