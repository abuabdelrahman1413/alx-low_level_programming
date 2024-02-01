#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len - print Count of nodes
* @h: pointer to first element
* Return: Count of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (-1);
		h = h->next;
		count++;
	}

	return (count);
}
