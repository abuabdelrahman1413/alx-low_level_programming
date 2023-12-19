#include "main.h"

/**
 * _isalpha - Function to check charecter letter or not
 * @c: charecter to check
 * Return: 1 to letter 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
