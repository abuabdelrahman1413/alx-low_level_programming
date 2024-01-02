#include <stdio.h>

/**
 * add - adds two integers and returns the result
 * @a: int to be added to b
 * @b: int to be added to a
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
