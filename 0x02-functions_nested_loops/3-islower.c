#include "main.h"

/**
 *_islower - function to check if letter is lower
 *@c: charecter to check
 *Return: 1 for lower 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
