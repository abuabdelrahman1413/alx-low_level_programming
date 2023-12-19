#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Function to print letters from a-z 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
}
