#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - print Count of nodes
* @h: pointer to first element
* Return: Count of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
