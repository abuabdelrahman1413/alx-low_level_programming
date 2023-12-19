#include "main.h"

/**
 *_abs - function to find abs value of number
 *@n: number
 *Return: abs value of number
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
