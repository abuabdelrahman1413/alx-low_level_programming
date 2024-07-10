#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{


	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	return (dest);
}

/*int main() {
    char src[] = "Hello, world!";
    char dest[50]; // Make sure dest has enough space to hold the copied string

    // Call _strcpy to copy src to dest
    _strcpy(dest, src);

    // Print the copied string in dest
    printf("Copied string: %s\n", dest);

    return 0;
}*/

