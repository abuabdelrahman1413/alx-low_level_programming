#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Function to print letters from a-z 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97 ; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
