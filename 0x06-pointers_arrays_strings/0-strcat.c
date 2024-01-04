#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int lenDest, i;

	lenDest = 0;

	while (*dest != '\0')
		lenDest++;

	for (i = lenDest; *src != '\0'; i++)
	{
		dest[i] = *src++;
	}
	

	return (dest);
}
